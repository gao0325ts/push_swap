NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS =	ft_strlen.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strnstr.c \
	ft_strncmp.c \
	ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_memchr.c \
	ft_memmove.c \
	ft_memcmp.c \
	ft_atoi.c \
	ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_calloc.c \
	ft_strdup.c \
	ft_substr.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_split.c \
	ft_itoa.c \
	ft_strmapi.c \
	ft_striteri.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c

BONUS = ft_lstnew.c \
	ft_lstadd_front.c \
	ft_lstsize.c \
	ft_lstlast.c \
	ft_lstadd_back.c \
	ft_lstdelone.c \
	ft_lstclear.c \
	ft_lstiter.c \
	ft_lstmap.c

OBJS = $(SRCS:.c=.o)
BONUS_OBJS = $(BONUS:.c=.o)

ifdef WITH_BONUS
SRCS += $(BONUS)
OBJS += $(BONUS_OBJS)
endif

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
	@echo "\n$(BOLD)$(GLITCH_BLUE)⚡ Creating archive $(NAME)...⚡$(DEF_COLOR)"
	@ar rcs $@ $^
	@echo "\n$(BOLD)$(NEON_GREEN)✅ $(NAME) are ready! ✅$(DEF_COLOR)\n"

.c.o:
	@echo "$(ITALIC)$(GLITCH_BLUE)⚙️  Compiling: $(ELECTRIC_BLUE)$<$(DEF_COLOR)"
	@$(CC) $(CFLAGS) -c $< -o $@

bonus:
	@echo "$(BOLD)$(NEON_PINK)💥 Building with bonus... 💥$(DEF_COLOR)"
	@make WITH_BONUS=1
	@echo "$(NEON_GREEN)✅ Bonus build complete! ✅$(DEF_COLOR)"

clean:
	@echo "\n$(BOLD)$(HOT_PINK)🧹 Cleaning up object files... 🧹$(DEF_COLOR)"
	@rm -f $(OBJS) $(BONUS_OBJS)
	@echo "$(NEON_GREEN)✨ Object files cleaned! ✨$(DEF_COLOR)\n"

fclean: clean
	@echo "$(BOLD)$(NEON_PINK)🧼 Removing $(NAME)... 🧼$(DEF_COLOR)"
	@rm -f $(NAME)
	@echo "$(NEON_GREEN)✨ $(NAME) is gone! Fresh start ready! ✨$(DEF_COLOR)\n"

re:
	@echo "\n$(BOLD)$(CYBER_PURPLE)🔄 Rebuilding $(NAME)...🔄$(DEF_COLOR)"
	@make fclean
	@make all

.PHONY: all clean fclean re bonus
