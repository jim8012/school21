NAME = do-op
CC = gcc
CFLAGS = -Wall -Werror -Wextra -c
OFLAGS = -Wall -Werror -Wextra -o
SRCS = main.c
LIBR = -L. libft.a
HEADER = f.h
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
