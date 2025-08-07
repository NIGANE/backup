# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amerkht <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/07 05:01:57 by amerkht           #+#    #+#              #
#    Updated: 2025/08/07 16:14:31 by amerkht          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op
CC = cc -Wall -Wextra -Werror
SRC = dep.c ops.c do-op.c
OBJ = $(SRC:.c=.o)


all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $^ -g -o $(NAME)

%.o: %.c
	@$(CC) -c $< -o $@
clean: 
	@rm -f $(OBJ) $(NAME)
