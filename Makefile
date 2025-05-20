NAME = push_swap

CC = gcc
CFLAGS = -Wall -Wextra -Werror

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

SRCS = main.c swap.c three_num.c algorithm.c check_input.c check_input_utils.c \
       utils.c stack.c rot.c reverse_rot.c pmove.c index.c cost.c target_pos.c \
       to_move.c start.c utils_2.c

OBJS = $(SRCS:.c=.o)

HEADER = push_swap.h

all: $(LIBFT) $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

$(NAME): $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJS) -L$(LIBFT_DIR) -lft -o $(NAME)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -I$(LIBFT_DIR) -c $< -o $@

clean:
	$(MAKE) -C $(LIBFT_DIR) clean
	rm -f $(OBJS)

fclean: clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	rm -f $(NAME)

re: fclean all


.PHONY: all clean fclean re