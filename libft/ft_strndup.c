/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luwargni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 09:38:33 by luwargni          #+#    #+#             */
/*   Updated: 2018/12/04 20:19:43 by luwargni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s, size_t n)
{
	char	*str;
	size_t	i;

	i = -1;
	if (!(str = (char *)malloc(sizeof(char) * ft_strnlen(s, n) + 1)))
		return (NULL);
	while (++i < n)
		str[i] = s[i];
	str[i] = '\0';
	return (str);
}
