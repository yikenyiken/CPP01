NAME	= Harl
FLAGS	= -Werror -Wall -Wextra -std=c++98
HEADERS	= Harl.hpp
SRCS	= main.cpp Harl.cpp
OBJS	= $(SRCS:.cpp=.o)

all		: $(NAME)

%.o		: %.cpp $(HEADERS)
	$(CXX) -c $< -o $@ $(FLAGS)

$(NAME)	: $(OBJS)
	$(CXX) $^ -o $@ $(FLAGS)

clean	:
	@rm -rf $(OBJS) 

fclean	: clean
	@rm -rf $(NAME)

re		: fclean all

test	: $(NAME)
	./$< DEBUG
	./$< INFO
	./$< WARNING
	./$< ERROR
	./$< RANDOM

.PHONY	: clean
