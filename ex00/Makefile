
CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = bureaucrat

SRCS = main.cpp Bureaucrat.cpp

HEADERS = Bureaucrat.hpp

OBJS = $(SRCS:%.cpp=%.o)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

%.o:%.cpp $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
.PHONY: all clean fclean re
