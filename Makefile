# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fvonsovs <fvonsovs@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/11 20:44:02 by fvonsovs          #+#    #+#              #
#    Updated: 2023/04/17 17:40:40 by fvonsovs         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror 
NAME		=	libft.a
SRCS		=	libft/ft_atoi.c libft/ft_bzero.c libft/ft_calloc.c libft/ft_isalnum.c libft/ft_isalpha.c libft/ft_isascii.c \
				libft/ft_isdigit.c libft/ft_isprint.c libft/ft_memchr.c libft/ft_memcmp.c libft/ft_memcpy.c libft/ft_memmove.c \
				libft/ft_memset.c libft/ft_strchr.c libft/ft_strdup.c libft/ft_strlcat.c libft/ft_strlcpy.c libft/ft_strlen.c \
				libft/ft_strncmp.c libft/ft_strnstr.c libft/ft_strrchr.c libft/ft_tolower.c libft/ft_toupper.c \
				libft/ft_strjoin.c libft/ft_substr.c libft/ft_strtrim.c libft/ft_split.c libft/ft_itoa.c libft/ft_strmapi.c \
				libft/ft_striteri.c libft/ft_putchar_fd.c libft/ft_putstr_fd.c libft/ft_putendl_fd.c libft/ft_putnbr_fd.c \
				get_next_line/get_next_line.c ft_printf/ft_printf.c ft_printf/ft_print_chars.c \
				ft_printf/ft_print_hexadecimals.c ft_printf/ft_print_numerals.c 
OBJS		=	${SRCS:.c=.o}
BONUS		=	libft/ft_lstnew.c libft/ft_lstadd_front.c libft/ft_lstsize.c libft/ft_lstlast.c libft/ft_lstadd_back.c \
				libft/ft_lstdelone.c libft/ft_lstclear.c libft/ft_lstiter.c libft/ft_lstmap.c
BONUS_OBJS	=	$(BONUS:.c=.o)
LIBC		=	ar -cq
RM			=	rm -f
TOTAL_FILES = $(shell echo $(SRCS) | wc -w)
CURRENT_FILES = 0

all: $(NAME)

$(NAME): ${OBJS}
	${LIBC} ${NAME} ${OBJS}

%.o: %.c
	@$(eval CURRENT_FILES=$(shell echo $$(($(CURRENT_FILES)+1))))
	@echo "Compiling $< [$(CURRENT_FILES)/$(TOTAL_FILES)]"
	@$(CC) $(CFLAGS) -c $< -o $@

bonus: ${OBJS} ${BONUS_OBJS}
	${LIBC} ${NAME} ${OBJS} ${BONUS_OBJS}

clean: 
	${RM} ${OBJS} ${BONUS_OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY:	all clean fclean re bonus

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS)
	gcc -nostartfiles -shared -o libft.so $(OBJS)
