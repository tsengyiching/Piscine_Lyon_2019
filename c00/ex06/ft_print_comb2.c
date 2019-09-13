/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_comb2.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yictseng <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/31 11:35:00 by yictseng     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/05 19:23:26 by yictseng    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

void	ft_print_comb2(void)
{
	int	i;
	int j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			if (i <= 9)
				write(1, "0", 1);
			ft_putnbr(i);
			ft_putchar(' ');
			if (j <= 9)
				write(1, "0", 1);
			ft_putnbr(j);
			if (i < 98)
				write(1, ", ", 2);
			j++;
		}
		i++;
	}
	write(1, "\n", 1);
}
