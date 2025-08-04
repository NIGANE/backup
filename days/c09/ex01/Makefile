# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amerkht <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/04 10:41:29 by amerkht           #+#    #+#              #
#    Updated: 2025/08/04 11:15:29 by amerkht          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a
SRC =   srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
SRC_DIR = srcs
OBJ =  $(SRC:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -I includes
RM = rm -f 




all:$(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

$(SRC_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all
