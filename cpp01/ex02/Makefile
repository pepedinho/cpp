# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: itahri <itahri@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/19 14:13:52 by itahri            #+#    #+#              #
#    Updated: 2024/09/28 15:00:00 by itahri           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex02

CPP = c++

CPP_FLAGS = -Wall -Wextra -Werror -std=c++98 -g3

SRC_FILE = main.cpp

OBJ_FILE = $(SRC_FILE:.cpp=.o)

OBJS = $(OBJ_FILE)

all: $(NAME)

srcs/%.o: srcs/%.cpp
	$(CPP) $(CPP_FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CPP) $(CPP_FLAGS) -o $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
