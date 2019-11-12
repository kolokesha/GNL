NAME=get_next_line.a

SRCS=get_next_line.c

OBJECTS=get_next_line.o

INCLUDES=get_next_line.h


all: $(NAME)

$(NAME): $(OBJECTS)
	@ar rc $(NAME) $(OBJECTS)
	@ranlib $(NAME)
	echo "Make"
	echo "Make succesfull"

$(O): %.o: %.c
	@gcc -Wall -Wextra -Werror -c $^

clean:
	@/bin/rm -f $(OBJECTS)

fclean: clean
	@echo "gg ya livayu"
	@/bin/rm -f $(NAME)

re: fclean all
