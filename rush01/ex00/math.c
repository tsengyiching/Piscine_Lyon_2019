/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   math.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlepart <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/11 16:29:01 by rlepart      #+#   ##    ##    #+#       */
/*   Updated: 2019/08/12 14:11:53 by yictseng    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft.h"

int		ft_power(int i, int power)
{
	int k;
	int l;

	k = 0;
	l = 1;
	while (k < power)
	{
		l = l * i;
		k++;
	}
	return (l);
}

int		test_line(long n, int len)
{
	int	i;

	i = ((len - 1) / 4) * 4;
	while (i + 1 < len)
	{
		if (n % 10 == n / ft_power(10, len - i - 1) % 10)
			return (0);
		i++;
	}
	return (1);
}

int		test_column(long n)
{
	long	i;

	i = n / 10000;
	while (i > 0)
	{
		if (i % 10 == n % 10)
			return (0);
		i = i / 10000;
	}
	return (1);
}

int		ft_do_everything(long n, int len, int *str)
{
	long	i;

	if ((!test_line(n, len)) || (!test_column(n)))
		return (0);
	if (len == 16)
	{
		if (last_tests(n, 16, str))
			return (1);
	}
	i = 1;
	while (i < 5 && len < 16)
	{
		if (ft_do_everything(n * 10 + i, len + 1, str))
			return (1);
		i++;
	}
	return (0);
}

int		solve(int *str)
{
	long i;

	i = 1;
	while (i < 5)
	{
		if (ft_do_everything(i, 1, str))
			return (1);
		i++;
	}
	return (0);
}
