# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shamzaou <shamzaou@student.42abudhabi.ae>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/24 15:31:54 by shamzaou          #+#    #+#              #
#    Updated: 2024/01/25 15:02:56 by shamzaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex02

CXX := c++

CXXFLAGS := -std=c++98 -Wall -Wextra -Werror

SRCS := main.cpp

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