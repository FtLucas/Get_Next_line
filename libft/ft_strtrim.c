/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luwargni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 21:24:39 by luwargni          #+#    #+#             */
/*   Updated: 2018/11/25 05:30:00 by luwargni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		size;
	char	*str;

	if (s == NULL)
		return (NULL);
	i = 0;
	size = ft_strlen(s) - 1;
	while (s[i] && (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'))
		i++;
	while (size > 0 && (s[size] == ' ' || s[size] == '\t' || s[size] == '\n'))
		size--;
	size = (size + 1 - i < 0 ? 0 : size + 1 - i);
	if (!(str = (char *)malloc(sizeof(char) * (size + 1))))
		return (0);
	j = 0;
	while (j < size)
	{
		str[j] = s[i];
		i++;
		j++;
	}
	str[j] = '\0';
	return (str);
}
