NAME = push_swap
BONUS = checker

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf

LIB = lib.a

LIB_DIR = ./lib
LIB_SRCS = $(wildcard $(LIB_DIR)/*/*.c)
LIB_OBJS = $(LIB_SRCS:.c=.o)

SRCS_DIR = ./srcs
INCLUDES = -I ./includes -I $(LIB_DIR)/libft -I $(LIB_DIR)/get_next_line
SRCS = $(filter-out $(SRCS_DIR)/main.c, $(wildcard $(SRCS_DIR)/*/*.c))
OBJS = $(SRCS:.c=.o)

BONUS_DIR = ./bonus
BONUS_SRCS = $(filter-out $(BONUS_DIR)/main.c, $(wildcard $(BONUS_DIR)/*.c))
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

BOLD =			\033[1m
ITALIC =		\033[3m
NEON_PINK =		\033[38;5;200m
NEON_GREEN =	\033[38;5;120m
CYBER_PURPLE =	\033[38;5;135m
GLITCH_BLUE =	\033[38;5;87m
ELECTRIC_BLUE =	\033[38;5;39m
HOT_PINK =		\033[38;5;213m
DEF_COLOR =		\033[0;39m

MAKEFLAGS += --no-print-directory

all: $(NAME)

$(NAME): $(OBJS) $(LIB_OBJS) $(SRCS_DIR)/main.o
	@make -C $(LIB_DIR)
	@echo "\n$(BOLD)$(CYBER_PURPLE)🔗 Linking into $(NAME)...🔗$(DEF_COLOR)"
	@$(CC) $(CFLAGS) $(OBJS) $(LIB_OBJS) $(SRCS_DIR)/main.o -o $(NAME)
	@echo "\n$(BOLD)$(NEON_GREEN)✅ $(NAME) is ready! ✅$(DEF_COLOR)\n"

bonus: $(BONUS)

$(BONUS): $(BONUS_OBJS) $(OBJS) $(LIB_OBJS) $(BONUS_DIR)/main.o
	@make -C $(LIB_DIR)
	@echo "\n$(BOLD)$(CYBER_PURPLE)🔗 Linking into $(BONUS)...🔗$(DEF_COLOR)"
	@$(CC) $(CFLAGS) $(BONUS_OBJS) $(OBJS) $(LIB_OBJS) $(BONUS_DIR)/main.o -o $(BONUS)
	@echo "\n$(BOLD)$(NEON_GREEN)✅ $(BONUS) is ready! ✅$(DEF_COLOR)\n"

.c.o:
	@echo "$(ITALIC)$(GLITCH_BLUE)⚙️  Compiling: $(ELECTRIC_BLUE)$<$(DEF_COLOR)"
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	@echo "\n$(BOLD)$(HOT_PINK)🧹 Cleaning up object files... 🧹$(DEF_COLOR)"
	@$(RM) $(OBJS) $(BONUS_OBJS) $(LIB_OBJS) $(SRCS_DIR)/main.o $(BONUS_DIR)/main.o
	@echo "$(NEON_GREEN)✨ Object files cleaned! ✨$(DEF_COLOR)\n"

fclean: clean
	@echo "$(BOLD)$(NEON_PINK)🧼 Removing $(NAME)... 🧼$(DEF_COLOR)"
	@$(RM) $(LIB_DIR)/$(LIB)
	@$(RM) $(NAME) $(BONUS)
	@echo "$(NEON_GREEN)✨ $(NAME) is gone! Fresh start ready! ✨$(DEF_COLOR)\n"

re:
	@echo "\n$(BOLD)$(CYBER_PURPLE)🔄 Rebuilding $(NAME)...🔄$(DEF_COLOR)"
	@make fclean
	@make all
	@make bonus

.PHONY: all clean fclean re
