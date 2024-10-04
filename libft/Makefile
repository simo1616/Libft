# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbendidi <mbendidi@student.42lausanne.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/22 11:06:06 by mbendidi          #+#    #+#              #
#    Updated: 2024/09/22 11:06:06 by mbendidi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        = libft.a
CFLAGS      = -Wall -Wextra -Werror
CC          = gcc

# Fichiers sources
FILES       = ft_atoi.c \
              ft_bzero.c \
              ft_calloc.c \
              ft_isalnum.c \
              ft_isalpha.c \
              ft_isascii.c \
              ft_isdigit.c \
              ft_isprint.c \
              ft_itoa.c \
              ft_memchr.c \
              ft_memcmp.c \
              ft_memcpy.c \
              ft_memmove.c \
              ft_memset.c \
              ft_putchar_fd.c \
              ft_putendl_fd.c \
              ft_putnbr_fd.c \
              ft_putstr_fd.c \
              ft_split.c \
              ft_strchr.c \
              ft_strdup.c \
              ft_striteri.c \
              ft_strjoin.c \
              ft_strlcat.c \
              ft_strlcpy.c \
              ft_strlen.c \
              ft_strmapi.c \
              ft_strncmp.c \
              ft_strnstr.c \
              ft_strrchr.c \
              ft_strtrim.c \
              ft_substr.c \
              ft_tolower.c \
              ft_toupper.c

# Objets générés
OBJ         = $(FILES:.c=.o)

# Règles

all: $(NAME)

# Compilation de la bibliothèque
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

# Compilation des fichiers .c en .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Nettoyage des fichiers objets
clean:
	rm -f $(OBJ)

# Nettoyage complet
fclean: clean
	rm -f $(NAME)

# Reconstruction complète
re: fclean all

.PHONY: all clean fclean re