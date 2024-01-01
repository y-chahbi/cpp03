# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/17 11:47:17 by ychahbi           #+#    #+#              #
#    Updated: 2024/01/01 22:17:02 by ychahbi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SUBJ = DiamondTrap
SRC  = ClapTrap.cpp main.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp
CC= c++ -g
FLAGS= -Wall -Wextra -Werror -std=c++98 #-Wshadow
RM= rm -f
OBJ_ALL = $(SRC:.cpp=.o)

all: $(SUBJ)

$(SUBJ): $(OBJ_ALL)
	$(CC) $(FLAGS) $^ -o $@

%.o: %.cpp ClapTrap.hpp ScavTrap.hpp FragTrap.hpp DiamondTrap.hpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ_ALL)

fclean: clean
	$(RM) $(SUBJ)

re: fclean all

.PHONY: clean fclean all re