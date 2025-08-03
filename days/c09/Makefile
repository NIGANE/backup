
NAME = libft.a
SRC =   src/ft_putchar.c src/ft_swap.c src/ft_putstr.c src/ft_strlen.c src/ft_strcmp.c
OBJ =  $(SRC:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f 




all:$(NAME)

$(NAME): $(OBJ)
	echo "=> making the $(NAME) library"
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	@echo "=> compiling"
	$(CC) $(CFLAGS) -c $< -o $@
	@echo "=> end compiling"

clean:
	@echo "clean obj files"
	rm -f $(OBJ)
fclean: clean
	@echo "cleaning $(NAME) file"
	rm -f $(NAME)