NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf

LIB = lib.a

LIB_DIR = ./lib
SRCS_DIR = ./srcs
INCLUDES = -I ./includes -I $(LIB_DIR)/libft -I $(LIB_DIR)/get_next_line

LIB_SRCS = $(wildcard $(LIB_DIR)/*/*.c)
LIB_OBJS = $(LIB_SRCS:.c=.o)

SRCS = $(wildcard $(SRCS_DIR)/*/*.c) $(SRCS_DIR)/main.c
OBJS = $(SRCS:.c=.o)

CHECKER_SRCS = $(wildcard $(SRCS_DIR)/checker/*.c)
CHECKER_OBJS = $(CHECKER_SRCS:.c=.o)

BOLD =			\033[1m
ITALIC =		\033[3m
NEON_PINK =		\033[38;5;198m
NEON_GREEN =	\033[38;5;118m
CYBER_PURPLE =	\033[38;5;99m
GLITCH_BLUE =	\033[38;5;81m
ELECTRIC_BLUE =	\033[38;5;39m
HOT_PINK =		\033[38;5;205m
DEF_COLOR =		\033[0;39m

MAKEFLAGS += --no-print-directory

all: $(NAME)

$(NAME): $(OBJS)
	@make -C $(LIB_DIR)
	@cp $(LIB_DIR)/$(LIB) .
	@echo "\n$(BOLD)$(CYBER_PURPLE)🔗 Linking into $(NAME)...🔗$(DEF_COLOR)"
	@$(CC) $(CFLAGS) $(OBJS) ./$(LIB_DIR)/$(LIB) -o $(NAME)
	@echo "\n$(BOLD)$(NEON_GREEN)✅ $(NAME) are ready! ✅$(DEF_COLOR)\n"

.c.o:
	@echo "$(ITALIC)$(GLITCH_BLUE)⚙️  Compiling: $(ELECTRIC_BLUE)$<$(DEF_COLOR)"
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@	

# checker:


clean:
	@echo "\n$(BOLD)$(HOT_PINK)🧹 Cleaning up object files... 🧹$(DEF_COLOR)"
	@$(RM) $(OBJS) $(LIB_OBJS)
	@echo "$(NEON_GREEN)✨ Object files cleaned! ✨$(DEF_COLOR)\n"

fclean: clean
	@echo "$(BOLD)$(NEON_PINK)🧼 Removing $(NAME)... 🧼$(DEF_COLOR)"
	@$(RM) $(LIB_DIR)/$(LIB)
	@$(RM) $(NAME) $(LIB)
	@echo "$(NEON_GREEN)✨ $(NAME) is gone! Fresh start ready! ✨$(DEF_COLOR)\n"

re:
	@echo "\n$(BOLD)$(CYBER_PURPLE)🔄 Rebuilding $(NAME)...🔄$(DEF_COLOR)"
	@make fclean
	@make all

.PHONY: all clean fclean re
