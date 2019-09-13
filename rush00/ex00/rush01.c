/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   rush01.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yictseng <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/03 12:02:58 by yictseng     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/03 14:39:59 by yictseng    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_putchar(char c);

void	firstline(int x)
{
	int i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
			ft_putchar(47);
		else if (i > 1 && i < x)
			ft_putchar(42);
		else if (i == x)
			ft_putchar(92);
		i++;
	}
}

void	middleline(int x)
{
	int i;

	i = 1;
	while (i <= x)
	{
		if (i == 1 || (x == i && x != 1))
			ft_putchar(42);
		else if (i > 1 && i < x)
			ft_putchar(32);
		i++;
	}
}

void	endline(int x)
{
	int i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
			ft_putchar(92);
		else if (i > 1 && i < x)
			ft_putchar(42);
		else if (i == x)
			ft_putchar(47);
		i++;
	}
}

void	rush(int x, int y)
{
	int i;

	i = 1;
	if (x > 0 && y > 0)
	{
		while (i <= y)
		{
			if (i == 1)
				firstline(x);
			else if (i > 1 && i < y)
				middleline(x);
			else if (i == y)
				endline(x);
			ft_putchar(10);
			i++;
		}
	}
}
