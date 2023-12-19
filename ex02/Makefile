# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/17 11:47:17 by ychahbi           #+#    #+#              #
#    Updated: 2023/12/18 21:59:09 by ychahbi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SUBJ = Repetitive
SRC  = ClapTrap.cpp main.cpp ScavTrap.cpp FragTrap.cpp
CC= c++ -g
FLAGS= -Wall -Wextra -Werror -std=c++98
RM= rm -f
OBJ_ALL = $(SRC:.cpp=.o)

all: $(SUBJ)

$(SUBJ): $(OBJ_ALL)
	$(CC) $(FLAGS) $^ -o $@

%.o: %.cpp ClapTrap.hpp ScavTrap.hpp FragTrap.hpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ_ALL)

fclean: clean
	$(RM) $(SUBJ)

re: fclean all

.PHONY: clean fclean all re