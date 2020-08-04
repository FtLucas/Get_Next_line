/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luwargni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 02:08:56 by luwargni          #+#    #+#             */
/*   Updated: 2018/11/12 11:25:53 by luwargni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(dest);
	j = ft_strlen(src);
	if (j < n)
		ft_strcpy(&dest[i], src);
	else
	{
		ft_strncpy(&dest[i], src, n);
		dest[i + n] = '\0';
	}
	return (dest);
}
