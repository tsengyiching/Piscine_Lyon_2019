/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   rush00.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fdumas <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/03 13:24:56 by fdumas       #+#   ##    ##    #+#       */
/*   Updated: 2019/08/03 15:57:48 by fdumas      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_putchar(char c);

void	firstlastline(int x)
{
	int i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
			ft_putchar(111);
		else if (i > 1 && i != x)
			ft_putchar(45);
		else if (i == x)
		{
			ft_putchar(111);
		}
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
			ft_putchar(124);
		else if (i > 1 && i != x)
			ft_putchar(32);
		else if (i == x)
		{
			ft_putchar(124);
		}
		i++;
	}
}

void	rush(int x, int y)
{
	int i;

	i = 1;
	if (y > 0 && x > 0)
	{
		while (i <= y)
		{
			if (i == 1)
				firstlastline(x);
			else if (i > 1 && i != y)
				middleline(x);
			else if (i == y)
				firstlastline(x);
			ft_putchar(10);
			i++;
		}
	}
}
