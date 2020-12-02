/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 15:32:59 by user              #+#    #+#             */
/*   Updated: 2020/11/27 15:32:59 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
char		*ft_strnstr(char *str, char *to_find, unsigned int n);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
char		*ft_strjoin(char const *s1, char const *s2);
void		*ft_memset(void *s, int c, size_t n);
char		*ft_strchr(char const *s, int n);
char		*ft_strrchr(char const *s, int n);
int		ft_atoi(char *str);
int		ft_isalpha(int c);
int		ft_isalnum(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_isascii(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_strlen(char *str);
#endif
