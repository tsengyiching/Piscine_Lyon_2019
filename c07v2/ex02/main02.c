#include <stdio.h>

int		ft_ultimate_range(int **range, int min, int max);

int		main()
{
	int min;
	int max;
	int *tab;
	int **range;

	min = 5;
	max = 10;
	range = &tab;
	printf("%d\n", ft_ultimate_range(range, min, max));
	return (0);
}
