libft.a:
	gcc -c -I ./includes -Wall -Wextra -Werror srcs/*.c
	mv *.o ./srcs
	ar rc libft.a srcs/*.o

.PHONY: all libft.a ./srcs/*.o clean fclean re

all:	libft.a

clean:
	rm ./srcs/*.o

fclean: 		clean
	rm libft.a

re:		fclean all
