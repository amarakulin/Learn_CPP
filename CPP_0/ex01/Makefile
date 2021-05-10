# **************************************************************************** #
#                                                                      .       #
#   Makefile                                                          / V\     #
#                                                                   / `  /     #
#   By: tilda      <tilda@student.21-school.ru.fr>                 <<   |      #
#                                                                  /    |      #
#   Created: 5/10/21 by tilda                                    /      |      #
#                                                              /        |      #
#                                                            /    \  \ /       #
#                                                           (      ) | |       #
#                                                   ________|   _/_  | |       #
#                                                 <__________\______)\__)      #
# **************************************************************************** #

NAME = phone_book
CLANG = clang++
FLAGS = -Wall -Werror -Wextra
INCLUDE = ./Includes
C_FILES = $(shell find . -name "*.c" $(IGNORE_PATHS) -execdir echo {} ';')
OBJDIR = ./obj
OBJ = $(C_FILES:%.cpp=%.o)
O_FILES = $(addprefix $(OBJDIR)/, $(OBJ))
IGNORE_PATHS = ! -path "./cmake-build-debug/*"

vpath %.o $(OBJDIR)

#Tools to edit text
RED = \033[1;31m
GREEN = \033[1;32m
YELLOW = \033[1;33m
BLUE = \033[1;34m
PURPLE = \033[1;35m
CYAN = \033[1;36m
WHITE = \033[1;37m
UNDERLINE = \033[0;4m
TEXT_RESET = \033[0;0m

.PHONY: all clean fclean re

all: $(OBJDIR) $(NAME)

$(NAME): $(OBJ)
	@$(CLANG) $(INCLUDE) $(O_FILES) -o $@
	@echo "$(GREEN)Success!"

$(OBJDIR):
	@mkdir -p $(OBJDIR)

%.o: %.cpp $(INCLUDE)
	@echo "$(CYAN)Compiling $<"
	@$(CLANG) -I$(INCLUDE) -c $< -o $(OBJDIR)/$@

clean:
	@echo "$(TEXT_RESET)"
	@rm -rf $(OBJDIR)
	@echo "$(YELLOW)Delete 'o' files"

fclean: clean
	@echo "$(TEXT_RESET)"
	@rm -f $(NAME)
	@echo "$(YELLOW)Delete the binary file '$(NAME)'"

re: fclean all