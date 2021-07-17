# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tjani <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/02 14:14:16 by tjani             #+#    #+#              #
#    Updated: 2021/02/02 18:43:01 by tjani            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
CC = gcc
CFLAGS = -Wall -Werror -Wextra -c
OFLAGS = -Wall -Werror -Wextra -o
SRCS = main.c
LIBR = -L. libft.a
HEADER = j12.h
OBJS = $(patsubst %.c, %.o, $(SRCS))

all: $(NAME)

$(NAME):
		$(CC) $(CFLAGS) $(SRCS)
		$(CC) $(OFLAGS) $(NAME) $(OBJS) $(LIBR)

clean:
		/bin/rm -f $(OBJS)

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
