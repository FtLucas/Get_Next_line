/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luwargni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 22:53:15 by luwargni          #+#    #+#             */
/*   Updated: 2018/11/25 04:50:02 by luwargni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	size_t			size;
	size_t			neg;
	unsigned int	nb;
	char			*str;

	size = 0;
	neg = 0;
	if (n < 0)
	{
		neg++;
		size++;
		n = n * -1;
	}
	nb = n;
	while (n /= 10)
		size++;
	if (!(str = (char *)malloc(sizeof(char) * (size) + 1)))
		return (NULL);
	str[size + 1] = '\0';
	str[size] = (48 + nb % 10);
	while (nb /= 10)
		str[--size] = (48 + nb % 10);
	if (neg == 1)
		str[--size] = '-';
	return (str);
}
