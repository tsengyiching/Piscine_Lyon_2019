#include <stdio.h>

char	*ft_strdup(char *src);

int		main(int ac, char **av)
{
	char *src;

	src = av[1];
	if (ac != 2)
		return (0);
	printf("%s\n", ft_strdup(src));
	return (0);
}
