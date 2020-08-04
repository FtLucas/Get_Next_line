/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luwargni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 23:42:48 by luwargni          #+#    #+#             */
/*   Updated: 2018/11/15 04:51:53 by luwargni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t				i;
	const unsigned char	*s1b;
	const unsigned char	*s2b;

	s1b = (const unsigned char *)s1;
	s2b = (const unsigned char *)s2;
	if (n == 0)
		return (0);
	i = 0;
	while (s1b[i] && s2b[i] && s1b[i] == s2b[i] && i < n - 1)
		i++;
	return (s1b[i] - s2b[i]);
}
