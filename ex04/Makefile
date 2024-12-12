NAME	= patternReplace
FLAGS	= -Werror -Wall -Wextra -std=c++98
HEADERS	= patternReplace.h
SRCS	= $(shell find . -iname "*.cpp")
OBJS	= $(SRCS:.cpp=.o)
MAIN	= main.cpp

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
	./$< $(MAIN) "(" "{" && sleep 2
	./$< $(MAIN) " " "_" && sleep 2
	./$< $(MAIN) "std::" "" && sleep 2
	> "$(MAIN).replace"
	./$< "$(MAIN).replace" "hello" "hi"
	./$< $(MAIN) "" ""

.PHONY	: clean
