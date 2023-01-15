/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvonsovs <fvonsovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 21:29:21 by fvonsovs          #+#    #+#             */
/*   Updated: 2023/01/15 16:04:48 by fvonsovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

int				ft_atoi(char *str);

void			*ft_bzero(void *s, size_t n);

void			*ft_calloc(size_t mem, size_t size);

int				ft_isalnum(int str);

int				ft_isalpha(int str);

int				ft_isascii(int c);

int				ft_isdigit(int str);

int				ft_isprint(int str);

void			*ft_memchr(const void *source, int c, size_t l);

int				ft_memcmp(const void *s1, const void *s2, size_t n);

void			*ft_memcpy(void *dest, const void *src, size_t n);

void			*ft_memmove(void *dest, const void *src, size_t n);

void			*ft_memset(void *s, int c, size_t n);

char			*ft_strchr(const char *src, int c);

char			*ft_strdup(char *src);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int				ft_strlen(char *str);

int				ft_strncmp(char *s1, char *s2, size_t n);

char			*ft_strnstr(char *big, char *little, size_t len);

char			*ft_strrchr(const char *src, int ch);

int				ft_tolower(int c);

int				ft_toupper(int c);

char			*ft_substr(char const *s, unsigned int start, size_t len);

char			*ft_strjoin(char const *s1, char const *s2);

char			*ft_strtrim(char const *s1, char const *set);

char			**ft_split(char const *s, char c);

#endif
