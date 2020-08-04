/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luwargni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 11:53:11 by luwargni          #+#    #+#             */
/*   Updated: 2018/11/25 03:25:28 by luwargni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (src < dest)
		while (n--)
			((char *)dest)[n] = ((char *)src)[n];
	else
		while (n > i)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i++;
		}
	return (dest);
}
