# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaboga-d <jaboga-d@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/13 15:24:41 by jaboga-d          #+#    #+#              #
#    Updated: 2025/01/29 14:29:42 by jaboga-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a

SOURCES = ft_atoi.c		\
		ft_bzero.c		\
		ft_calloc.c		\
		ft_isalnum.c	\
		ft_isalpha.c	\
		ft_isascii.c	\
		ft_isdigit.c	\
		ft_isprint.c	\
		ft_itoa.c		\
		ft_memchr.c		\
		ft_memcmp.c		\
		ft_memcpy.c		\
		ft_memmove.c	\
		ft_memset.c		\
		ft_putchar_fd.c	\
		ft_putnbr_fd.c	\
		ft_putstr_fd.c	\
		ft_putendl_fd.c \
		ft_split.c		\
		ft_strchr.c		\
		ft_strdup.c		\
		ft_striteri.c	\
		ft_strjoin.c	\
		ft_strlcat.c 	\
		ft_strlcpy.c	\
		ft_strlen.c 	\
		ft_strmapi.c	\
		ft_strncmp.c	\
		ft_strnstr.c	\
		ft_strrchr.c	\
		ft_strtrim.c	\
		ft_substr.c		\
		ft_tolower.c	\
		ft_toupper.c

BSOURCES = ft_lstnew_bonus.c	\
		ft_lstadd_front_bonus.c	\
		ft_lstadd_back_bonus.c	\
		ft_lstlast_bonus.c		\
		ft_lstsize_bonus.c		\
		ft_lstadd_back_bonus.c	\
		ft_lstdelone_bonus.c	\
		ft_lstclear_bonus.c		\
		ft_lstiter_bonus.c		\
		ft_lstmap_bonus.c		\

OBJECTS = $(SOURCES:.c=.o)
BOBJECTS = $(BSOURCES:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

bonus: $(OBJECTS) $(BOBJECTS)
	ar rcs $(NAME) $(OBJECTS) $(BOBJECTS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(BOBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re

