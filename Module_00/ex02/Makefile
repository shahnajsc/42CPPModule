NAME        =    dreamjob

SRC_PATH    =    ./srcs
HEADER_PATH    =    ./includes

SRC         =    Account.cpp tests.cpp \

SRC_FILES    =    $(addprefix $(SRC_PATH)/,$(SRC))

CC            =    c++
CFLAGS        =    -Wall -Wextra -Werror -std=c++98 -I$(HEADER_PATH)
RM            =    rm -rf

OBJ_PATH    =    ./objects/
OBJ         =    $(addprefix $(OBJ_PATH), $(notdir $(SRC_FILES:.cpp=.o)))

all: $(NAME)

$(OBJ_PATH)%.o: $(SRC_PATH)/%.cpp
		@mkdir -p $(OBJ_PATH)
		$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
		$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
		@echo "$(SWAP)[✔] Build complete! Run './$(NAME)'.$(RESET)"

clean:
		@$(RM) $(OBJ) $(OBJ_PATH)
		@echo "$(SWAP)[✔] Objects files removed.$(RESET)"

fclean: clean
		@$(RM) $(NAME)
		@echo "$(SWAP)[✔] Executable '$(NAME)' removed.$(RESET)"

re: fclean all

# Colors
SWAP    =\033[7m
RESET    =\e[0m

# NAME		= account
# CC			= c++
# CFLAGS		= -Wall -Wextra -Werror -std=c++20

# SRCS		= ./srcs/tests.cpp ./srcs/Account.cpp \
# OBJS		= $(SRCS:.cpp=.o)

# RM			= rm -rf

# all: $(NAME)

# $(SRCS)%.o: $(OBJS)%.cpp
# 	$(CC) $(CFLAGS) -c $< -o $@

# $(NAME): $(OBJS)
# 	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

# clean:
# 	$(RM) $(OBJS)

# fclean: clean
# 	$(RM) $(NAME)

# re: fclean all

# .PHONY: all clean fclean re
