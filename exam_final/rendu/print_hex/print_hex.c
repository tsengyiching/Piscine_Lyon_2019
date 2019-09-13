/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   print_hex.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: exam <marvin@le-101.fr>                    +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/23 11:26:14 by exam         #+#   ##    ##    #+#       */
/*   Updated: 2019/08/23 13:44:35 by exam        ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_atoi(char *str)
{
	int res;
	int sign;

	res = 0;
	sign = 1;
	while (*str == '\t' || *str == '\n' || *str == '\v' || *str == '\f'
			|| *str == '\r' || *str == ' ')
		str++;
	if (*str == '-')
	{
		sign = sign * -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - '0');
		str++;
	}
	return (res * sign);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_print_hex(long int nb, char *hex)
{
	int res;

	res = nb % 16;
	nb = nb / 16;
	if (nb != 0)
		ft_print_hex(nb, hex);
	ft_putchar(hex[res]);
}

int		main(int ac, char **av)
{
	long int	nb;
	char		*hex = "0123456789abcdef";
	char		*str;

	if (ac != 2)
		write(1, "\n", 1);
	else
	{
		str = av[1];
		if (ft_strlen(str) != 0)
		{
			nb = ft_atoi(str);
			if (nb == 0)
				write(1, "0", 1);
			else if (nb > 0)
				ft_print_hex(nb, hex);
			write(1, "\n", 1);
		}
		else
			write(1, "\n", 1);
	}
	return (0);
}
