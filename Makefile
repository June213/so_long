NAME	= so_long

CC 		= gcc

CFLAGS	= -Wall -Wextra -Werror -g3 

MLX_FLAG = -framework OpenGL -framework AppKit

RM		= rm -rf

SRC_DIR = src

OBJ_DIR	= obj

SRCS	= $(SRC_DIR)/so_long.c \
		$(SRC_DIR)/input.c \
		$(SRC_DIR)/player.c \
		$(SRC_DIR)/floodfill.c \

OBJS    = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRCS))

LIBFT	= libft
LIBFT_A = $(LIBFT)/libft.a
LIBFT_INC = -I$(LIBFT)
LIBFT_OBJS = $(LIBFT)/*.o

PRINTF	= printf
PRINTF_A = $(PRINTF)/libftprintf.a
PRINTF_INC = -I$(PRINTF)
PRINTF_OBJS = $(PRINTF)/*.o

MLX	= mlx
MLX_A = $(MLX)/libmlx.a
MLX_INC = -I$(MLX)
MLX_OBJS = $(MLX)/*.o

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT) $(PRINTF) $(MLX)
	@$(MAKE) -C $(LIBFT)
	@$(MAKE) -C $(PRINTF)
	@$(MAKE) -C $(MLX)
	$(CC) $(CFLAGS) $(MLX_FLAG) $(OBJS) $(LIBFT_A) $(PRINTF_A) $(MLX_A) -o $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) $(LIBFT_INC) $(PRINTF_INC) $(MLX_INC) -c $< -o $@

clean:
	$(RM) $(OBJ_DIR)
	@$(MAKE) clean -C $(LIBFT) 
	@$(MAKE) clean -C $(PRINTF)
	@$(MAKE) clean -C $(MLX)

fclean: clean
	$(RM) $(NAME) $(LIBFT_A) $(PRINTF_A) $(MLX_A)

re: fclean all

.PHONY: all clean fclean re