NAME = libftprintf.a
CC = cc
FLAGS = -Wall -Wextra -Werror
SRCS = ft_put_s.c ft_put_c.c ft_printf.c ft_put_d.c ft_put_p.c ft_put_u.c ft_put_x.c
OBJS = $(SRCS:.c=.o)
ARRCS = ar -rcs

all: $(NAME)

$(NAME): $(OBJS)
	$(ARRCS) $(NAME) $(OBJS)

%.o: %.c ft_printf.h Makefile
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
