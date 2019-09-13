#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int		main(int ac, char **av)
{
	printf("%s", ft_strjoin(ac, av, "  "));
	return (0);
}
