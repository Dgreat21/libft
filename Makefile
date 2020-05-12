NAME = libft.a

INC_DIR		= ./includes
SRC_DIR		= ./sources
OBJ_DIR		= ./objects

HEAD		= $(INC_DIR)/libft.h

SRC		=	 *.c

OBJS	=	$(addprefix $(OBJ_DIR)/,$(SRC:%.c=%.o))

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)


$(NAME): $(OBJ_DIR) $(OBJS) $(HEAD) $(PFT_OBJ_DIR) $(PFT_OBJS) $(PFT_HEAD)
	@ar rc $(NAME) $(OBJS) $(PFT_OBJS)
	@ranlib $(NAME)
	@echo "libft.a was created"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@clang $F -g -c $< -I$(INC_DIR) -o$@

clean:
	@rm -Rf $(OBJ_DIR) $(PFT_OBJ_DIR)
	@echo "Objects was deleted"

fclean: clean
	@rm -f $(NAME)
	@echo "libft.a was deleted"

re: fclean all

norm:
	@norminette

.PHONY: all clean fclean re norm
