NAME = fractol

MLX_PATH = /usr/local/lib

LFT_PATH = ./libft

FLAGS = -Wall -Werror -Wextra

FRMW = -framework OpenGL -framework AppKit

LIBS = -L $(MLX_PATH) -lmlx -L $(LFT_PATH) -lft -lpthread

SRC = ./sources/*.c

OBJ = $(SRC:.c=.o)

all :
	@gcc -I $(LFT_PATH)/includes $(FLAGS) -c $(SRC)
	@mv *.o ./sources
	@gcc $(LIBS) $(FRMW) $(OBJ) -I $(LFT_PATH)/includes $(FLAGS) -o $(NAME)

clean :
	@rm -f $(OBJ)

fclean : clean
	@rm -f $(NAME)

re : fclean all
