NAME	= getViolent
FLAGS	= -Werror -Wall -Wextra -std=c++98
HEADERS	= Weapon.h HumanA.h HumanB.h
SRCS	= $(shell find . -iname "*.cpp")
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

.PHONY	: clean
