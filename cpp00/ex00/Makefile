# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: itahri <itahri@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/19 14:13:52 by itahri            #+#    #+#              #
#    Updated: 2024/09/19 14:18:51 by itahri           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

SRCS = megaphone.cpp

OBJS = $(SRCS:.cpp=.o)

CFLAGS = -Wall -Wextra -Werror -g3 -std=c++98

NAME = megaphone

all : $(LIBFT) $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -c  $< -o $@ 

$(NAME):  $(OBJS)
	$(CC) $(CFLAGS)  $(OBJS) -o $(NAME) 

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
