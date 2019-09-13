#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, &*str++, 1);
	}
}

int		main(int ac, char **av)
{
	int i;
	char *str;
	char temp;
	int j;

	if (ac != 2)
		write(1, "\n", 1);
	else
	{
		i = 0;
		j = 0;
		str = av[1];
		while (str[j])
		{
			j++;
		}
		while (i < j)
		{
			temp = str[i];
			str[i] = str[j - 1];
			str[j - 1] = temp;
			i++;
			j--;
		}
		ft_putstr(str);
		write(1, "\n", 1);
	}
	return (0);
}
