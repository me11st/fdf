NAME =		../../src/libft/libft.a
CC =		cc
CFLAGS =	-Wall -Wextra -Werror

# Macros
## FOR GET_NEXT_LINE()
BUFFER_SIZE ?= 4096
FD_SIZE ?= 1024

SRCS :=		$(wildcard *.c) 
OBJS :=		$(SRCS:%.c=../../obj/libft/%.o)
HDRS := 	$(wildcard *.h)

# Define the total number of sorce files.
TOTAL_SRCS := $(words $(SRCS))
SRC_NUM := 0

# Define ANSI escape codes for colors and styles
RESET = \033[0m
BOLD = \033[1m

# Target 'all' is the default target, building library specified by $(NAME).
all:	$(NAME)

# Rule to compile .c files to .o files with specified macros.
# Prints progress bar.
../../obj/libft/%.o: %.c $(HDRS)
	@mkdir -p $(@D)
	@$(eval SRC_NUM := $(shell expr $(SRC_NUM) + 1))
	@$(eval PERCENT := $(shell printf "%.0f" $(shell echo "scale=4; $(SRC_NUM) / $(TOTAL_SRCS) * 100" | bc)))
	@printf "$(BOLD)\rCompiling libft: ["
	@$(eval PROGRESS := $(shell expr $(PERCENT) / 5))
	@printf "$%0.s:)$(BOLD)" $(shell seq 1 $(PROGRESS))
	@if [ $(PERCENT) -lt 100 ]; then printf "%0.s:)" $(shell seq 1 $(shell expr 20 - $(PROGRESS))); fi
	@printf "] "
	@printf "%d%% $(RESET)" $(PERCENT)
	@$(CC) $(CFLAGS) -D BUFFER_SIZE=$(BUFFER_SIZE) -D FD_SIZE=$(FD_SIZE) -c $< -o $@

# Target $(NAME) depends on object files $(OBJS),
# and the 'ar rc' command creates the library.
$(NAME):	$(OBJS)
	@ar rcs $(NAME) $(OBJS)

# Target 'clean' removes object files.
clean:
	@$(eval SRC_NUM := $(words $(wildcard ../../obj/libft/*.o)))
	@rm -f $(OBJS)
	@echo "$(BOLD)Object files cleaned.$(RESET)"

# Target 'fclean' depends on 'clean' and removes the library as well.
fclean:	clean
	@rm -f $(NAME)
	@rm -rf ../../obj/libft
	@echo "$(BOLD)Libft library removed.$(RESET)"
	@$(eval SRC_NUM := 0)

# Target 're' depends on 'fclean' and 'all', rebuilding the project from scratch.
re:	fclean all

# Marking rules as 'phony' to ensure that 'make' doesn't misinterpret them as files.
.PHONY: all clean fclean re
