NAME = lib.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf

LIBFT_DIR = ./libft
GNL_DIR = ./get_next_line

SRCS = $(wildcard $(LIBFT_DIR)/*.c $(GNL_DIR)/*.c)
OBJS = $(SRCS:.c=.o)

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

$(NAME): $(OBJS)
	@echo "\n$(BOLD)$(GLITCH_BLUE)⚡ Creating archive $(NAME)...⚡$(DEF_COLOR)"
	@ar rcs $@ $^
	@echo "\n$(BOLD)$(NEON_GREEN)✅ $(NAME) is ready! ✅$(DEF_COLOR)\n"

.c.o:
	@echo "$(ITALIC)$(GLITCH_BLUE)⚙️  Compiling: $(ELECTRIC_BLUE)$<$(DEF_COLOR)"
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "\n$(BOLD)$(HOT_PINK)🧹 Cleaning up object files... 🧹$(DEF_COLOR)"
	@rm -f $(OBJS)
	@echo "$(NEON_GREEN)✨ Object files cleaned! ✨$(DEF_COLOR)\n"

fclean: clean
	@echo "$(BOLD)$(NEON_PINK)🧼 Removing $(NAME)... 🧼$(DEF_COLOR)"
	@rm -f $(NAME)
	@echo "$(NEON_GREEN)✨ $(NAME) is gone! Fresh start ready! ✨$(DEF_COLOR)\n"

re:
	@echo "\n$(BOLD)$(CYBER_PURPLE)🔄 Rebuilding $(NAME)...🔄$(DEF_COLOR)"
	@$(MAKE) fclean
	@$(MAKE) all

.PHONY: all clean fclean re bonus
