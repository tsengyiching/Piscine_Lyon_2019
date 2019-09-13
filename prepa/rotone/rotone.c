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

		if (ac != 2)
				write(1, "\n", 1);
		else
		{
				i = 0;
				str = av[1];
				while (str[i])
				{
						if (str[i] == 'z')
								str[i] = 'a';
						else if (str[i] == 'Z')
								str[i] = 'A';
						else if ((str[i] >= 'a' && str[i] < 'z' )
										|| (str[i] >= 'A' && str[i] < 'Z'))
								str[i] = str[i] + 1;
						i++;
				}
				ft_putstr(str);
				write(1, "\n", 1);
		}
		return(0);
}
