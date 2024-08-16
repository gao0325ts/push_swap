NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf

LIBFT_DIR = ./libft
SRCS_DIR = ./srcs
INCLUDES = -I ./includes -I $(LIBFT_DIR)

LIBFT_SRCS = $(wildcard $(LIBFT_DIR)/*.c)
LIBFT_OBJS = $(LIBFT_SRCS:.c=.o)
LIBFT = libft.a

SRCS = $(wildcard $(SRCS_DIR)/*/*.c) $(SRCS_DIR)/main.c
OBJS = $(SRCS:.c=.o)

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
	@make -C $(LIBFT_DIR)
	@cp $(LIBFT_DIR)/$(LIBFT) .
	@echo "\n$(BOLD)$(CYBER_PURPLE)🔗 Linking into $(NAME)...🔗$(DEF_COLOR)"
	@$(CC) $(CFLAGS) $(OBJS) -L. -lft -o $(NAME)
	@echo "\n$(BOLD)$(NEON_GREEN)✅ $(NAME) are ready! ✅$(DEF_COLOR)\n"

.c.o:
	@echo "$(ITALIC)$(GLITCH_BLUE)⚙️  Compiling: $(ELECTRIC_BLUE)$<$(DEF_COLOR)"
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@	

clean:
	@echo "\n$(BOLD)$(HOT_PINK)🧹 Cleaning up object files... 🧹$(DEF_COLOR)"
	@$(RM) $(OBJS) $(LIBFT_OBJS)
	@echo "$(NEON_GREEN)✨ Object files cleaned! ✨$(DEF_COLOR)\n"

fclean: clean
	@echo "$(BOLD)$(NEON_PINK)🧼 Removing $(NAME)... 🧼$(DEF_COLOR)"
	@$(RM) $(LIBFT_DIR)/$(LIBFT)
	@$(RM) $(NAME) $(LIBFT)
	@echo "$(NEON_GREEN)✨ $(NAME) is gone! Fresh start ready! ✨$(DEF_COLOR)\n"

re:
	@echo "\n$(BOLD)$(CYBER_PURPLE)🔄 Rebuilding $(NAME)...🔄$(DEF_COLOR)"
	@make fclean
	@make all

.PHONY: all clean fclean re
