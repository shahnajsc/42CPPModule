NAME		= harl
CC			= c++
CFLAGS		= -Wall -Wextra -Werror -std=c++98

INCLUDE		= -I./includes
OBJ_DIR		= ./objects
SRCS_DIR 	= ./srcs
SRCS_FILES 	= main.cpp Harl.cpp

SRCS		= $(addprefix ($(SRCS_DIR))/, $(SRCS_FILES))
OBJS		= $(addprefix $(OBJ_DIR)/,  $(SRCS_FILES:.cpp=.o))

RM			= rm -rf

all: $(NAME)

# Compile rule
$(OBJ_DIR)/%.o: $(SRCS_DIR)/%.cpp
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

# Linking rule
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(INCLUDE) $(OBJS) -o $(NAME)

clean:
	@$(RM) $(OBJS) $(OBJ_DIR)
	@echo "$(RED)Object files removed.....$(RESET)"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(RED)Executable removed.....$(RESET)"

re: fclean all

# color
RED		= \033[0;31m
RESET		= \033[0;36m

.PHONY: all clean fclean re
