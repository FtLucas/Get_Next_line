/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luwargni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 23:38:21 by luwargni          #+#    #+#             */
/*   Updated: 2018/11/17 23:38:22 by luwargni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*str;
	size_t	i;

	i = 0;
	if (!(str = (char *)malloc(sizeof(char) * (size))))
		return (NULL);
	while (i < size)
	{
		str[i] = 0;
		i++;
	}
	return (str);
}
