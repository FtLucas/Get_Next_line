/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luwargni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 04:53:32 by luwargni          #+#    #+#             */
/*   Updated: 2018/11/24 01:20:55 by luwargni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;

	i = -1;
	if (s1 == s2)
		return ((char *)s1);
	if (s1[0] == '\0' && s2[0] == '\0')
		return ((char *)s2);
	while (s1[++i] && i <= len)
	{
		j = 0;
		if (s1[i + j] == s2[j])
			while (s1[i + j] == s2[j] && s2[j])
				j++;
		if (s2[j] == '\0' && (i + j) <= len)
			return ((char *)&s1[i]);
	}
	return (NULL);
}
