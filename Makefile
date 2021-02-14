# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhenriqu <jhenriqu@42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/12 11:26:37 by jhenriqu          #+#    #+#              #
#    Updated: 2021/02/13 20:39:11 by jhenriqu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = libft.a
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
ft_isdigit.c ft_isprint.c ft_itoa.c ft_memccpy.c ft_memchr.c ft_memcmp.c \
ft_memcpy.c ft_memmove.c ft_memset.c ft_strlcpy.c ft_strlcat.c ft_strnstr.c \
ft_strncmp.c ft_strchr.c ft_strrchr.c ft_strdup.c ft_toupper.c ft_tolower.c \
ft_strlen.c ft_strjoin.c ft_strtrim.c ft_split.c ft_substr.c ft_strmapi.c \
ft_putnbr_fd.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \

SRCS_bonus = ft_isblank.c ft_putnbr.c ft_putchar.c ft_putstr.c \
ft_isnumber.c ft_islower.c ft_isupper.c ft_lstnew_bonus.c \
ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c \
ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c \
ft_strcat.c ft_strcpy.c ft_strncat.c ft_strncpy.c ft_strstr.c


OBJ = ft_*.o

.PHONY: all
all:$(NAME)
$(NAME):
	$(CC) -c $(CFLAGS) $(SRCS)
	ar -rcs $(NAME) $(OBJ)

bonus:
	$(CC) -c $(CFLAGS) $(SRCS) $(SRCS_bonus)
	ar -rcs $(NAME) $(OBJ)

so:
	$(CC) -fPIC -c $(CFLAGS) $(SRCS) $(SRCS_bonus)
	gcc -shared -o libft.so $(OBJ)
clean:
	rm -rf $(OBJ)
fclean: clean
	rm -rf $(NAME)

re: fclean all
