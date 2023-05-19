# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpedro-a <jpedro-a@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/11 16:13:37 by jpedro-a          #+#    #+#              #
#    Updated: 2023/05/19 17:31:47 by jpedro-a         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
		ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strdup.c \
		ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_substr.c \
		ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strjoin.c \
		ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c 
OBJ = ${SRC:.c=.o}
CFLAGS = -Wall -Werror -Wextra
NAME = libft.a

all: ${NAME}

.c.o:
	${CC} ${CFLAGS} -I. -c $< -o $@

${NAME}: ${OBJ}
	ar rcs ${NAME} ${OBJ}
clean:
	rm -f ${OBJ}
fclean: clean
	rm -f ${NAME}
re: fclean all