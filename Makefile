# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhenriqu <jhenriqu@42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/12 11:26:37 by jhenriqu          #+#    #+#              #
#    Updated: 2020/12/08 15:50:05 by jhenriqu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_*.c
OBJ = ft_*.o
all:$(NAME)
$(NAME):
	$(CC) -c $(CFLAGS) $(SRCS)
	ar -rc $(NAME) $(OBJ)

so:
	$(CC) -fPIC -c $(CFLAGS) $(SRCS)
	gcc -shared -o libft.so $(OBJ)
clean:
	rm -rf $(OBJ)
fclean: clean
	rm -rf $(NAME)

re: fclean all


