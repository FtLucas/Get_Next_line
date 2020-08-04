/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luwargni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 09:52:34 by luwargni          #+#    #+#             */
/*   Updated: 2018/11/27 15:45:52 by luwargni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_list_push_back(t_list **begin_list, void *content)
{
	t_list	*head;

	if (begin_list == NULL)
		*begin_list = ft_create_elem(content);
	else
	{
		head = *begin_list;
		while (head->next)
			head = head->next;
		head->next = ft_create_elem(content);
	}
}
