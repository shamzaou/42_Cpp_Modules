# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shamzaou <shamzaou@student.42abudhabi.ae>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/05 17:03:35 by shamzaou          #+#    #+#              #
#    Updated: 2024/03/05 04:25:50 by shamzaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex01

CXX := c++

CXXFLAGS := -std=c++98 -Wall -Wextra -Werror

SRCS := main.cpp Fixed.cpp

OBJS := $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all