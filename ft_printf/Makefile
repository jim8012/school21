NAME = libftprintf.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar -rcs
RM = rm -f

SRCS = ft_outputs.c \
		ft_printf.c \
		itoa_uns.c \
		itoa_x.c \
		puts.c

OBJS = $(SRCS:%.c=%.o)

%.o: %.c libftprintf.h
	$(CC) $(CFLAGS) -I . -c $< -o $@

all: $(NAME)

bonus:	all

$(NAME): $(OBJS)
	$(AR) $@ $^

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: bonus all clean fclean re
