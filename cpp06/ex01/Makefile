# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: itahri <itahri@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/19 14:13:52 by itahri            #+#    #+#              #
#    Updated: 2024/11/01 14:13:29 by itahri           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = serializer 

CPP = c++

CPP_FLAGS = -Wall -Wextra -Werror -Wshadow -Wno-shadow -std=c++98 -g3

SRC_FILE = $(addprefix srcs/, main.cpp Data.cpp Serializer.cpp)

INCLUDE = -I includes/

OBJ_FILE = $(SRC_FILE:.cpp=.o)

OBJS = $(OBJ_FILE)

all: $(NAME)

srcs/%.o: srcs/%.cpp
	$(CPP) $(CPP_FLAGS) $(INCLUDE) -c $< -o $@

$(NAME): $(OBJS)
	$(CPP) $(CPP_FLAGS) $(INCLUDE) -o $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
