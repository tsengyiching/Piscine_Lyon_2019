#include <stdio.h>

char	**ft_split(char *str, char *charset);

int   main(int ac, char **av)
{
	char **tab;
	int i;

	(void)ac;
	i = 0;
	tab = ft_split(av[1], av[2]);
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
	return (0);
}
