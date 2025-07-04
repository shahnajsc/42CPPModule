NAME		= abstract
CC			= c++
CFLAGS		= -Wall -Wextra -Werror -std=c++11

INCLUDE		= -I./includes
OBJ_DIR		= ./objects
HDRS_DIR    = ./includes
SRCS_DIR 	= ./srcs
SRCS_FILES 	= main.cpp AAnimal.cpp Cat.cpp Dog.cpp Brain.cpp

HDRS		= $(wildcard $(HDRS_DIR)/*.hpp)
SRCS		= $(addprefix ($(SRCS_DIR))/, $(SRCS_FILES))
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
RESET		= \033[0;36m

.PHONY: all clean fclean re
