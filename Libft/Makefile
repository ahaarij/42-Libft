# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahaarij <ahaarij@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/01 10:51:34 by ahaarij           #+#    #+#              #
#    Updated: 2023/12/02 13:05:36 by ahaarij          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcpy.c	 	 \
		ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strrchr.c ft_strnstr.c ft_striteri.c	 \
		ft_tolower.c ft_toupper.c ft_memcmp.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_substr.c ft_strtrim.c	 \
		ft_strmapi.c ft_strjoin.c ft_memmove.c ft_split.c ft_itoa.c

SRCS2 = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c

CC = cc

CFLAGS = -Wall -Werror -Wextra

RM = rm -f

OBJS = $(SRCS:.c=.o)

BONUS_OBJS = $(SRCS2:.c=.o)

AR = ar -rcs

all: $(NAME)

bonus: $(BONUS_OBJS) 
		$(AR) $(NAME) $(BONUS_OBJS)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean: 
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY = all clean fclean re bonus