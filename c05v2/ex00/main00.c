#include <stdio.h>
#include <stdlib.h>

int		ft_iterative_factorial(int nb);

int		main(int ac, char **av)
{
	(void)ac;
	printf("%d\n", ft_iterative_factorial(atoi(av[1])));
	return (0);
}
