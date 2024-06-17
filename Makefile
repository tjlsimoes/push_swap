NAME := push_swap
CHECKER_NAME := checker

LIBFT := libft/libft.a
PRINTF := printf/libftprintf.a

CC := cc

CFLAGS := -Wall -Wextra -Werror
DEBUG_FLAGS = -g

SRC := push_swap.c stack_a.c stack_b.c stack_init.c \
sort_a.c sort_b.c \
operations_a.c operations_b.c operations_c.c operations_d.c\
best_nbr_moves.c calcs_ba.c calcs_ab.c\
error.c ft_atoi_alt.c ft_split_size.c \
split_clear.c

OBJ := $(SRC:.c=.o)

CHECKER_SRC := checker.c stack_a.c stack_b.c stack_init.c \
sort_a.c sort_b.c \
operations_a.c operations_b.c operations_c.c operations_d.c\
best_nbr_moves.c calcs_ba.c calcs_ab.c\
error.c ft_atoi_alt.c ft_split_size.c \
split_clear.c

CHECKER_OBJ := $(CHECKER_SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	cd printf && $(MAKE)
	cd libft && $(MAKE)
	$(CC) $(CFLAGS) $(OBJ) $(PRINTF) $(LIBFT) -o $(NAME)
## $(CC) $(CFLAGS) $(OBJ) -o $(NAME)

bonus: $(CHECKER_NAME)

$(CHECKER_NAME): $(CHECKER_OBJ)
	cd printf && $(MAKE)
	cd libft && $(MAKE)
	$(CC) $(CFLAGS) $(CHECKER_OBJ) $(PRINTF) $(LIBFT) -o $(CHECKER_NAME)
## $(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	cd printf && $(MAKE) clean
	cd libft && $(MAKE) clean
	$(RM) $(OBJ) $(CHECKER_OBJ)

fclean: clean
	cd printf && $(MAKE) fclean
	cd libft && $(MAKE) fclean
	$(RM) $(NAME) $(CHECKER_NAME)

debug: CFLAGS += $(DEBUG_FLAGS)
debug: $(OBJ)
	cd printf && $(MAKE)
	cd libft && $(MAKE) debug
	$(CC) -g $(CFLAGS) $(OBJ) $(PRINTF) $(LIBFT) -o $(NAME)

bdebug: CFLAGS += $(DEBUG_FLAGS)
bdebug: $(CHECKER_OBJ)
	cd printf && $(MAKE)
	cd libft && $(MAKE) debug
	$(CC) $(CFLAGS) $(CHECKER_OBJ) $(PRINTF) $(LIBFT) -o $(CHECKER_NAME)

re: fclean all

.PHONY: all bonus debug bdebug clean fclean re
# https://www.baeldung.com/linux/a-so-extension-files
# https://medium.com/@ayogun/makefile-basics-beginner-intermediate-c92377542c2c