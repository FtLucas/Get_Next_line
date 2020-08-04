/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luwargni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 08:15:53 by luwargni          #+#    #+#             */
/*   Updated: 2018/11/10 09:10:37 by luwargni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*srcbis;
	char	*destbis;
	size_t	i;

	srcbis = (char *)src;
	destbis = (char *)dest;
	i = 0;
	while (i < n)
	{
		destbis[i] = srcbis[i];
		i++;
	}
	return (destbis);
}
