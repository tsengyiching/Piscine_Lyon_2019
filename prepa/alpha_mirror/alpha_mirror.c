#include <unistd.h>

int		main(int ac, char **av)
{
	char	c;
	int		i;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{	
			c = av[1][i];
			if (c >= 'A' && c <= 'Z')
				c = 'Z' - c + 'A';
			else if (c >= 'a' && c <= 'z')
				c = 'z' - c + 'a';
			write(1, &c, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
