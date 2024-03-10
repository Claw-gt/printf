NAME = libftprintf.a

MY_SOURCES = ft_printf.c

MY_OBJECTS = $(MY_SOURCES:.c=.o)

CC = gcc
CFLAGS += -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(MY_OBJECTS)
		make -C libft
		cp libft/libft.a $(NAME)
		ar rcs $(NAME) $(MY_OBJECTS)
clean:
	rm -f $(MY_OBJECTS)
	make clean -C libft

fclean: clean
	rm -f $(NAME)
	cd libft && make fclean

re: fclean all

.PHONY: all clean fclean re