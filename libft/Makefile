# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nsondag <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/14 21:09:08 by nsondag           #+#    #+#              #
#    Updated: 2018/07/29 23:21:47 by nsondag          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
        ft_isdigit.c ft_isprint.c ft_itoa.c ft_memalloc.c \
        ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memdel.c \
        ft_memmove.c ft_memset.c ft_putchar.c ft_putchar_fd.c ft_putendl.c \
        ft_putendl_fd.c ft_putnbr.c ft_putnbr_fd.c ft_putstr.c ft_putstr_fd.c \
        ft_strcat.c ft_strchr.c ft_strclr.c ft_strcmp.c ft_strcpy.c \
        ft_strdel.c ft_strdup.c ft_strequ.c ft_striter.c ft_striteri.c \
        ft_strjoin.c ft_strlcat.c ft_strlen.c ft_strmap.c ft_strmapi.c \
        ft_strncat.c ft_strncmp.c ft_strncpy.c ft_strnequ.c ft_strnew.c \
        ft_strnstr.c ft_strrchr.c ft_strsplit.c ft_strstr.c ft_strsub.c \
        ft_strtrim.c ft_tolower.c ft_toupper.c ft_lstnew.c ft_lstdelone.c \
	ft_lstdel.c ft_lstadd.c ft_lstiter.c ft_lstmap.c

BONUS = ft_sqrt.c ft_next_sqrt.c ft_swap.c ft_strctrim.c ft_sorttab.c \
		ft_sortint.c ft_issorted.c ft_isrsorted.c

NAME = libft.a
FLAGS = -Wall -Werror -Wextra
INCL = libft.h
OBJ := $(SRC:%.c=%.o)
OBJB := $(BONUS:%.c=%.o)
 
.PHONY: all clean fclean re

all: $(NAME)

$(NAME):
	gcc -c $(FLAGS) $(SRC) $(BONUS)
	ar rc $(NAME) $(OBJ) $(OBJB)
	ranlib libft.a
clean:
	/bin/rm -f $(OBJ)
	/bin/rm -f $(OBJB)
fclean: clean
	/bin/rm -f $(NAME)
re: fclean all

