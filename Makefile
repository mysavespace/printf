# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kkwasny <kkwasny@student.42wolfsburg.de    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/16 19:14:38 by kkwasny           #+#    #+#              #
#    Updated: 2023/05/09 13:03:28 by kkwasny          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

AR = ar

NAME = libftprintf.a

CFLAGS = -Wall -Wextra -Werror

ARFLAGS = rc

SRC =	ft_printf.c \
		ft_putchar.c \
		ft_puthex.c \
		ft_putnbr.c \
		ft_putpointer.c \
		ft_putstr.c \
		ft_putunsigned.c

OBJFILES = ${SRC:.c=.o}

.c.o :
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME) : $(OBJFILES)
	$(AR) $(ARFLAGS) $(NAME) $(OBJFILES)

all : $(NAME)

fclean : clean
	rm -rf $(NAME)

clean :
	rm -rf $(OBJFILES)

re : fclean $(NAME)

.PHONY: all clean re fclean
