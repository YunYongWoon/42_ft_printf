# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yoyun <yoyun@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/11 13:11:17 by yoyun             #+#    #+#              #
#    Updated: 2022/03/16 15:12:16 by yoyun            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
		ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c \
		ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c \
		ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c \
		ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcpy.c ft_strlcat.c \
		ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
		ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c
BONUS =	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
		ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
		ft_lstclear.c ft_lstiter.c ft_lstmap.c
OBJS = $(SRCS:.c=.o)
BOBJS = $(BONUS:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror

ifdef WITH_BONUS
	OBJECTS = $(OBJS) $(BOBJS)
else
	OBJECTS = $(OBJS)
endif

all : $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -I./ -c $^ -o $@

$(NAME) : $(OBJECTS)
	ar rcs $@ $^

bonus : 
	@make WITH_BONUS=1

clean : 
	rm -rf $(OBJS) $(BOBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all fclean clean re
