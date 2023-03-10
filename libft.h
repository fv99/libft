/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvonsovs <fvonsovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 21:29:21 by fvonsovs          #+#    #+#             */
/*   Updated: 2023/02/22 18:14:23 by fvonsovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdint.h>

// for get_next_line
# define BUFFER_SIZE 255

// for printf
# define HEX_CHARS "0123456789abcdef"
# define HEX_CHARS_UPPERCASE "0123456789ABCDEF"

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

int					ft_atoi(char *str);

void				*ft_bzero(void *s, size_t n);

void				*ft_calloc(size_t mem, size_t size);

int					ft_isalnum(int str);

int					ft_isalpha(int str);

int					ft_isascii(int c);

int					ft_isdigit(int str);

int					ft_isprint(int str);

void				*ft_memchr(const void *source, int c, size_t l);

int					ft_memcmp(const void *s1, const void *s2, size_t n);

void				*ft_memcpy(void *dest, const void *src, size_t n);

void				*ft_memmove(void *dest, const void *src, size_t n);

void				*ft_memset(void *s, int c, size_t n);

char				*ft_strchr(const char *src, int c);

char				*ft_strdup(char *src);

unsigned int		ft_strlcat(char *dest, char *src, unsigned int size);

unsigned int		ft_strlcpy(char *dest, char *src, unsigned int size);

int					ft_strlen(char *str);

int					ft_strncmp(char *s1, char *s2, size_t n);

char				*ft_strnstr(char *big, char *little, size_t len);

char				*ft_strrchr(const char *src, int ch);

int					ft_tolower(int c);

int					ft_toupper(int c);

char				*ft_substr(char const *s, unsigned int start, size_t len);

char				*ft_strjoin(char const *s1, char const *s2);

char				*ft_strtrim(char const *s1, char const *set);

char				**ft_split(char const *s, char c);

char				*ft_itoa(int n);

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));

void				ft_striteri(char *s, void (*f)(unsigned int, char*));

void				ft_putchar_fd(char c, int fd);

void				ft_putstr_fd(char *s, int fd);

void				ft_putendl_fd(char *s, int fd);

void				ft_putnbr_fd(int n, int fd);

t_list				*ft_lstnew(void *content);

void				ft_lstadd_front(t_list **lst, t_list *new);

int					ft_lstsize(t_list *lst);

t_list				*ft_lstlast(t_list *lst);

void				ft_lstadd_back(t_list **lst, t_list *new);

void				ft_lstdelone(t_list *lst, void (*del)(void *));

void				ft_lstclear(t_list **lst, void (*del)(void *));

void				ft_lstiter(t_list *lst, void (*f)(void *));

t_list				*ft_lstmap(t_list *lst,
						void *(*f)(void *),
						void (*del)(void *));

char				*get_next_line(int fd);

int					ft_printf(const char *input, ...);

int					print_string(va_list *args);

int					putchar_return(va_list *args);

int					initialize_pointer(va_list *args);

int					print_hex_pointer(const void *ptr, int count);

int					print_hex_lowercase(va_list *args);

int					print_hex_uppercase(va_list *args);

int					print_integer_base10(va_list *args);

int					print_unsigned_base10(va_list *args);

#endif
