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

size_t		ft_strlcpy(char *dest, const char *src, size_t size);
size_t		ft_strlcat(char *dest, const char *src, size_t size);
char		*ft_strnstr(const char *str, const char *to_find, size_t n);
int		ft_strncmp(const char *s1,const char *s2, size_t n);
char		*ft_strjoin(char const *s1, char const *s2);
void		*ft_memset(void *s, int c, size_t n);
void		*ft_bzero(void *s, size_t n);
char		*ft_strchr(const char *s, int n);
char		*ft_strrchr(const char *s, int n);
int		ft_atoi(const char *str);
int		ft_isalpha(int c);
int		ft_isalnum(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_isascii(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_strlen(const char *str);
#endif
