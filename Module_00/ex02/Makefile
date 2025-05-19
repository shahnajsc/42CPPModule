NAME		= account
CC			= c++
CFLAGS		= -Wall -Wextra -Werror -std=c++20

SRCS		= tests.cpp Account.cpp
OBJS		= $(SRCS:.cpp=.o)

RM			= rm -rf

all: $(NAME)

# %.o: %.cpp
# 	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
