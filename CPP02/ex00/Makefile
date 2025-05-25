CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = ex02

SRCS = main.cpp Fixed.cpp
OBJS = $(SRCS:.cpp=.o)

RM = rm -f

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp Fixed.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all 