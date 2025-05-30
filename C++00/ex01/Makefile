# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iait-ouf <aitouflih.iman@gmail.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/14 18:35:52 by iait-ouf          #+#    #+#              #
#    Updated: 2025/01/20 10:47:37 by iait-ouf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

EXEC = megaphonebook

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CXX) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@
clean:
	rm -f $(OBJS)

fclean : clean
	rm -f $(EXEC)

re : fclean all

.PHONY: all clean fclean re

