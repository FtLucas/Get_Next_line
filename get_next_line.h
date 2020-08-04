/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luwargni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 17:33:52 by luwargni          #+#    #+#             */
/*   Updated: 2018/12/15 19:12:55 by luwargni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 666

# include <stdlib.h>
# include <unistd.h>

typedef struct		s_lst
{
	int				file_d;
	char			*tmp;
	struct s_lst	*next;
}					t_lst;

int					get_next_line(int const fd, char **line);

#endif
