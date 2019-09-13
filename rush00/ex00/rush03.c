/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   rush03.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yictseng <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/03 14:09:05 by yictseng     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/03 14:35:39 by yictseng    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_putchar(char c);

void	first_end_line(int x)
{
	int i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
			ft_putchar('A');
		else if (i > 1 && i < x)
			ft_putchar('B');
		else if (i == x)
			ft_putchar('C');
		i++;
	}
}

void	middleline(int x)
{
	int i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
			ft_putchar('B');
		else if (i > 1 && i < x)
			ft_putchar(' ');
		else if (i == x)
			ft_putchar('B');
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
				first_end_line(x);
			else if (i > 1 && i < y)
				middleline(x);
			else if (i == y)
				first_end_line(x);
			ft_putchar('\n');
			i++;
		}
	}
}
