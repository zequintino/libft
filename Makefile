# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jquintin <jquintin@student.42lisboa.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/25 17:18:29 by jquintin          #+#    #+#              #
#    Updated: 2022/10/26 13:02:50 by jquintin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a

SRC = ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_strlen.c \
	ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strncmp.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_strnstr.c \
	ft_atoi.c \
	ft_calloc.c \
	ft_strdup.c \
	ft_substr.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_split.c \
	ft_itoa.c \
	ft_strmapi.c \
	ft_striteri.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c

B_SRC = ft_lstnew.c \
	ft_lstadd_front.c \
	ft_lstsize.c \
	ft_lstlast.c \
	ft_lstadd_back.c \
	ft_lstdelone.c \
	ft_lstclear.c \
	ft_lstiter.c \
	ft_lstmap.c

CC = gcc

CFLAGS = -Wall -Wextra -Werror

OBJ = $(SRC:.c=.o)

B_OBJ = $(B_SRC:.c=.o)

%.o: %.c
	$(CC) -c $(CFLAGS) -o $@ $<

$(NAME): $(OBJ)
	ar -rcs $@ $(OBJ)

all: $(NAME)

bonus: $(B_OBJ)
	ar -rcs $(NAME) $(B_OBJ)

test: clean all
	$(CC) ../../42_my_testers/libft_test/libft_test.c  -L. -lft -o ../../42_my_testers/libft_test/test `pkg-config --cflags --libs libbsd-overlay`
	 ./../../42_my_testers/libft_test/test

clean:
	/bin/rm -f $(OBJ) $(B_OBJ) *.txt

fclean: clean
	/bin/rm -f $(NAME) libft_test/test libft.so a.out

re: fclean all

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC) $(B_SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJ) $(B_OBJ)

.PHONY: all, bonus, clean, fclean, re
