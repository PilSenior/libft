NAME = libft.a
FLAG = -Wall -Wextra -Werror
SRC = $(shell find . -name "ft_*.c")
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

%.o: %.c
	gcc $(FLAG) -c $< -o $@

clean:
	/bin/rm -f $(OBJ)
	@echo "mehmet başı"

fclean: clean
	/bin/rm -f $(NAME)
	@echo "aldı"
re: fclean allcl