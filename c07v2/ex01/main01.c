#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int min, int max);

int		main()
{
	int min;
	int max;
	int i;
	int *tab;

	min = 4;
	max = 4;
	tab = ft_range(min, max);
	i = 0;
	while (i < max - min)
	{
		printf("%d\n", tab[i]);
		i ++;
	}
	return (0);
}
