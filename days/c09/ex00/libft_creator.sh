# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amerkht <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/04 10:41:10 by amerkht           #+#    #+#              #
#    Updated: 2025/08/04 15:05:32 by amerkht          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash
cc -Wall -Wextra -Werror -c ft_putchar.c -o ft_putchar.o
cc -Wall -Wextra -Werror -c ft_putstr.c -o ft_putstr.o
cc -Wall -Wextra -Werror -c ft_strcmp.c -o ft_strcmp.o
cc -Wall -Wextra -Werror -c ft_strlen.c -o ft_strlen.o
cc -Wall -Wextra -Werror -c ft_swap.c -o ft_swap.o

ar rcs libft.a ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
