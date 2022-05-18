# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yoyun <yoyun@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/26 17:24:29 by yoyun             #+#    #+#              #
#    Updated: 2022/05/18 17:05:01 by yoyun            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRCS = ft_printf.c ft_logic.c ft_change_character.c ft_change_string.c ft_change_hex.c \
		ft_change_num.c ft_change_unsigned_num.c
OBJS = $(SRCS:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -I./ -c $^ -o $@

$(NAME) : $(OBJS)
	ar rcs $@ $^
	
clean : 
	rm -rf $(OBJS) 

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all fclean clean re
