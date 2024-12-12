NAME	= thisBrain
FLAGS	= -Werror -Wall -Wextra -std=c++98
SRCS	= main.cpp
OBJS	= $(SRCS:.cpp=.o)

all		: $(NAME)

%.o		: %.cpp
	$(CXX) -c $< -o $@ $(FLAGS)

$(NAME)	: $(OBJS)
	$(CXX) $^ -o $@ $(FLAGS)

clean	:
	@rm -rf $(OBJS) 

fclean	: clean
	@rm -rf $(NAME)

re		: fclean all

.PHONY	: clean
