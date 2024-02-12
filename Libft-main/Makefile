NAME	= libft.a

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror

SRC		= $(shell find . -type f ! -name "ft_lst*.c" -name "ft_*.c")


BSRC	= $(shell find . -type f -name "ft_lst*.c")


OBJ		= $(SRC:%.c=%.o)

B_OBJ	= $(BSRC:%.c=%.o)


all: $(NAME)

bonus: $(B_OBJ)
	ar -rcs $(NAME) $(B_OBJ)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)
	rm -rf $(B_OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
