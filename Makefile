# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pblondet <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/24 13:24:59 by pblondet          #+#    #+#              #
#    Updated: 2015/11/25 13:21:09 by pblondet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRCS = ft_putchar.c ft_putendl.c ft_putstr.c ft_strcpy.c ft_strncpy.c ft_putchar_fd.c ft_putnbr.c ft_putstr_fd.c ft_strlen.c
OBJS = $(SRCS:.c=.o)

