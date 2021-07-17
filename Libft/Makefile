NAME	=	libft.a
FLAGS	=	-Wall -Wextra -Werror

SRCS =	ft_memcmp.c \
		ft_substr.c \
		ft_memcpy.c \
		ft_tolower.c \
		ft_memmove.c \
		ft_toupper.c \
		ft_atoi.c \
		ft_strchr.c \
		ft_bzero.c \
		ft_strdup.c \
		ft_isalnum.c \
		ft_memset.c \
		ft_strlcat.c \
		ft_isalpha.c \
		ft_strlcpy.c \
		ft_strjoin.c \
		ft_isascii.c \
		ft_strlen.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_strncmp.c \
		ft_itoa.c \
		ft_strnstr.c \
		ft_memccpy.c \
		ft_strrchr.c \
		ft_memchr.c \
		ft_calloc.c \
		ft_strtrim.c \
		ft_strmapi.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_split.c

SRCSBONUS	= 	ft_lstnew.c

OBJS = $(SRCS:.c=.o)

OBJSBONUS = $(SRCSBONUS:.c=.o)

.PHONY: all clean fclean re bonus

all:	$(NAME)

$(NAME): $(OBJS)
		ar rc $(NAME) $(OBJS)
		ranlib $(NAME)

bonus:	$(OBJSBONUS)
		ar rc $(NAME) $(OBJSBONUS)
		ranlib $(NAME)

.c.o:
		gcc $(FLAGS) -c $< -o $(<:.c=.o)

clean:
		rm -rf $(OBJS) $(OBJSBONUS)

fclean:	clean
		rm -rf $(NAME)

re:		fclean all
