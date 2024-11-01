# Name of the executable
NAME = fdf
# Directories
LIBFTDIR = src/libft
MLXDIR = src/minilibx
OBJ_DIR = obj
# Libraries and compiler
LIBFT = $(LIBFTDIR)/libft.a
MLX = $(MLXDIR)/libmlx.a
CC = cc
CFLAGS = -Wall -Wextra -Werror -g -fsanitize=address
LIBS = -lGL -lGLU -lglut
RM = rm -f
# Source and object files
SRC_FILES = bresenham color draw error hooks main map_process memory render scale
SRC = $(addsuffix .c, $(addprefix src/, $(SRC_FILES)))
OBJ = $(SRC:%.c=$(OBJ_DIR)/%.o)
# Include directories
INCLUDES = -Iinclude -I$(LIBFTDIR) -I$(MLXDIR)
# Default target
all: setup $(OBJ_DIR) $(NAME)
# Compiling object files
$(OBJ_DIR)/%.o: %.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@
# Linking the executable
$(NAME): $(OBJ) $(LIBFT) $(MLX)
	@echo "Linking the executable..."
	$(CC) $(CFLAGS) $(OBJ) -L$(LIBFTDIR) -lft -L$(MLXDIR) -lmlx -lXext -lX11 -lm -o $(NAME)
	@echo "$(NAME) is ready."
# Ensure libft is built
$(LIBFT):
	@$(MAKE) -C $(LIBFTDIR)
	@echo "LibFT compiled."
# Ensure MiniLibX is built
$(MLX):
	@if [ ! -d "$(MLXDIR)" ]; then \
		echo "Cloning MiniLibX repository..."; \
		git clone https://github.com/42Paris/minilibx-linux.git $(MLXDIR) >/dev/null 2>&1; \
	fi
	@echo "Compiling MiniLibX..."
	@make -s -C $(MLXDIR) >/dev/null 2>&1;
	@echo "MiniLibX compiled."
# Create the object directory
$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)
# Clean object files
clean:
	@$(MAKE) -C $(LIBFTDIR) clean
	@$(MAKE) -C $(MLXDIR) clean
	@$(RM) -r $(OBJ_DIR)
	@echo "Object files cleaned."
# Clean object files and executable
fclean: clean
	@$(MAKE) -C $(LIBFTDIR) fclean
	@$(RM) $(NAME)
	@echo "$(NAME) and related files cleaned."
# Rebuild everything
re: fclean all
.PHONY: all clean fclean re setup
