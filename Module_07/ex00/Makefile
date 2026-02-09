NAME		= templates
CC			= c++
CFLAGS		= -Wall -Wextra -Werror -std=c++11

INCLUDE		= -I./includes
OBJ_DIR		= ./objects
HDRS_DIR    = ./includes
SRCS_DIR 	= ./srcs
HDRS_FILES	= templates.hpp
SRCS_FILES 	= main.cpp

HDRS		= $(addprefix $(HDRS_DIR)/, $(HDRS_FILES))
SRCS		= $(addprefix $(SRCS_DIR)/, $(SRCS_FILES))
OBJS		= $(addprefix $(OBJ_DIR)/,  $(SRCS_FILES:.cpp=.o))

RM			= rm -rf

all: $(NAME)

# Compile rule
$(OBJ_DIR)/%.o: $(SRCS_DIR)/%.cpp $(HDRS)
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

# Linking rule
$(NAME): $(OBJS) $(HDRS)
	@$(CC) $(CFLAGS) $(INCLUDE) $(OBJS) -o $(NAME)
	@echo "$(RESET)Executable $(PINK)$(NAME) $(RESET)created."

clean:
	@$(RM) $(OBJS) $(OBJ_DIR)
	@echo "$(RED)Object files removed.....$(RESET)"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(RED)Executable removed.....$(RESET)"

re: fclean all

# color
RED			= \033[0;31m
PINK		= \033[0;35m
GREEN		= \033[0;92m
BLUE		= \033[0;94m
YELLOW		= \033[0;93m
RESET		= \033[0m

.PHONY: all clean fclean re
