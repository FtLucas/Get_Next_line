/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luwargni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 19:14:50 by luwargni          #+#    #+#             */
/*   Updated: 2018/11/25 05:23:34 by luwargni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *meule_de_foin, const char *aiguille)
{
	size_t	i;
	size_t	j;

	i = -1;
	if (meule_de_foin[0] == '\0' && aiguille[0] == '\0')
		return ((char *)aiguille);
	while (meule_de_foin[++i])
	{
		j = 0;
		if (meule_de_foin[i + j] == aiguille[j])
			while (meule_de_foin[i + j] == aiguille[j] && aiguille[j])
				j++;
		if (aiguille[j] == '\0')
			return ((char *)&meule_de_foin[i]);
	}
	return (NULL);
}
