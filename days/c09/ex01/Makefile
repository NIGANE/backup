
NAME = libft.a
SRC =   src/ft_putchar.c src/ft_swap.c src/ft_putstr.c src/ft_strlen.c src/ft_strcmp.c
SRC_DIR = src
OBJ =  $(SRC:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror -I includes
RM = rm -f 




all:$(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
	echo "- $(OBJ)"

$(SRC_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@
src/%.o: src/%.c
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all
