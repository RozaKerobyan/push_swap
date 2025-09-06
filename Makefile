NAME = push_swap
NAME_BONUS = checker
CC = cc
CFLAGS = -Wall -Wextra -Werror
MANDATORY_DIR = mandatory
BONUS_DIR = bonus
FT_PRINTF_DIR = ft_printf
INCLUDES = -I$(MANDATORY_DIR)/inc -I$(FT_PRINTF_DIR)
BONUS_INCLUDES = -I$(BONUS_DIR_DIR)/inc -I$(FT_PRINTF_DIR)

SRCS = \
        $(MANDATORY_DIR)/src/ft_split.c \
	$(MANDATORY_DIR)/src/utils.c \
	$(MANDATORY_DIR)/src/push_swap.c \
	$(MANDATORY_DIR)/src/quick_sort.c \
	$(MANDATORY_DIR)/src/swap.c \
	$(MANDATORY_DIR)/src/push.c \
	$(MANDATORY_DIR)/src/rotate.c \
	$(MANDATORY_DIR)/src/reverse.c \
	$(MANDATORY_DIR)/src/sort.c \
	$(MANDATORY_DIR)/src/five_number_sort.c \
	$(MANDATORY_DIR)/src/three_number_sort.c \
	$(MANDATORY_DIR)/src/libft_utils.c \
	$(MANDATORY_DIR)/src/check_args.c \
	$(MANDATORY_DIR)/src/bubble_sort.c \
	$(MANDATORY_DIR)/src/free.c \
	$(FT_PRINTF_DIR)/ft_printf.c \
	$(FT_PRINTF_DIR)/ft_put_c.c \
	$(FT_PRINTF_DIR)/ft_put_s.c \
	$(FT_PRINTF_DIR)/ft_put_d.c \
	$(FT_PRINTF_DIR)/ft_put_x.c \
	$(FT_PRINTF_DIR)/ft_put_u.c \
	$(FT_PRINTF_DIR)/ft_put_p.c

BONUS_SRCS = \
        $(BONUS_DIR)/src/ft_split.c \
	$(BONUS_DIR)/src/utils.c \
	$(BONUS_DIR)/src/checker.c \
	$(BONUS_DIR)/src/checker_utils.c \
	$(BONUS_DIR)/src/get_next_line.c \
	$(BONUS_DIR)/src/get_next_line_utils.c \
	$(BONUS_DIR)/src/swap.c \
	$(BONUS_DIR)/src/push.c \
	$(BONUS_DIR)/src/rotate.c \
	$(BONUS_DIR)/src/reverse.c \
	$(BONUS_DIR)/src/sort.c \
	$(BONUS_DIR)/src/libft_utils.c \
	$(BONUS_DIR)/src/free.c \
	$(FT_PRINTF_DIR)/ft_printf.c \
	$(FT_PRINTF_DIR)/ft_put_c.c \
	$(FT_PRINTF_DIR)/ft_put_s.c \
	$(FT_PRINTF_DIR)/ft_put_d.c \
	$(FT_PRINTF_DIR)/ft_put_x.c \
	$(FT_PRINTF_DIR)/ft_put_u.c \
	$(FT_PRINTF_DIR)/ft_put_p.c


OBJS = $(SRCS:.c=.o)
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< $(INCLUDES) -o $@

bonus: $(BONUS_OBJS)
	$(CC) $(CFLAGS) $(BONUS_ICLUDES) $(BONUS_OBJS) -o $(NAME_BONUS)

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME) $(NAME_BONUS)

re: fclean all

.PHONY: all clean fclean re
