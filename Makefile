NAME := push_swap

LIBFT := libft/libft.a
PRINTF := printf/libftprintf.a

CC := cc

CFLAGS := -Wall -Wextra -Werror

SRC := push_swap.c
OBJ := $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	cd printf && $(MAKE)
	cd libft && $(MAKE)
	$(CC) $(CFLAGS) $(OBJ) $(PRINTF) $(LIBFT) -o $(NAME)
## $(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	cd printf && $(MAKE) clean
	cd libft && $(MAKE) clean
	$(RM) $(OBJ)

fclean: clean
	cd printf && $(MAKE) fclean
	cd libft && $(MAKE) fclean
	$(RM) $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
# https://www.baeldung.com/linux/a-so-extension-files
# https://medium.com/@ayogun/makefile-basics-beginner-intermediate-c92377542c2c