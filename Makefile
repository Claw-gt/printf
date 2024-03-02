include libft 

NAME = libftprintf.a

MY_SOURCES = 

MY_OBJECTS = $(MY_SOURCES:.c=.o)

CC = cc
CFLAGS += -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(MY_OBJECTS)
		ar rc $(NAME) $(MY_OBJECTS)

clean:
	rm -f $(MY_OBJECTS) $(MY_BONUS_OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus