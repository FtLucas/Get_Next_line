# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: luwargni <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/07 00:22:39 by luwargni          #+#    #+#              #
#    Updated: 2018/11/25 11:12:19 by luwargni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

SRCS = ft_atoi.c \
	   ft_lstnew.c \
	   ft_create_elem.c \
	   ft_list_push_back.c \
	   ft_lstmap.c \
	   ft_lstiter.c \
	   ft_lstadd.c \
	   ft_lstdelone.c \
	   ft_lstdel.c \
	   ft_strlen.c \
	   ft_strnlen.c \
	   ft_strcmp.c \
	   ft_strncmp.c \
	   ft_strcat.c \
	   ft_strncat.c \
	   ft_strcpy.c \
	   ft_strncpy.c \
	   ft_strlcat.c \
	   ft_memset.c \
	   ft_bzero.c \
	   ft_memcpy.c \
	   ft_memccpy.c \
	   ft_strchr.c \
	   ft_strrchr.c \
	   ft_memchr.c \
	   ft_memcmp.c \
	   ft_memmove.c \
	   ft_strstr.c \
	   ft_strnstr.c \
	   ft_isalpha.c \
	   ft_isupper.c \
	   ft_islower.c \
	   ft_isalnum.c \
	   ft_isblank.c \
	   ft_isdigit.c \
	   ft_isprint.c \
	   ft_isascii.c \
	   ft_toupper.c \
	   ft_tolower.c \
	   ft_strclr.c \
	   ft_strsub.c \
	   ft_strnequ.c \
	   ft_strequ.c \
	   ft_strmap.c \
	   ft_strmapi.c \
	   ft_itoa.c \
	   ft_putchar.c \
	   ft_striter.c \
	   ft_striteri.c \
	   ft_putstr.c \
	   ft_putnbr.c \
	   ft_putchar_fd.c \
	   ft_putendl.c \
	   ft_putendl_fd.c \
	   ft_putstr_fd.c \
	   ft_memalloc.c \
	   ft_memdel.c \
	   ft_strsplit.c \
	   ft_putnbr_fd.c \
	   ft_strjoin.c \
	   ft_strjoinfree.c \
	   ft_strnew.c \
	   ft_strdel.c \
	   ft_strtrim.c \
	   ft_strndup.c \
	   ft_strdup.c

OBJ = $(SRCS:.c=.o)

CFLAGS += -Werror -Wextra -Wall -I./includes

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $@ $(OBJ)

%.o: %.c
	$(CC) -o $@ -c $< $(CFLAGS)

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
