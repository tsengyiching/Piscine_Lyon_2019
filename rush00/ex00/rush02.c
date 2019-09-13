/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   rush02.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: esmith <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/03 15:12:01 by esmith       #+#   ##    ##    #+#       */
/*   Updated: 2019/08/03 15:36:09 by esmith      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_putchar(char c);

void	line(int x, char a, char b, char c)
{
	int i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
			ft_putchar(a);
		else if (i < x)
			ft_putchar(b);
		else if (i == x)
			ft_putchar(c);
		i++;
	}
}

void	rush(int x, int y)
{
	int i;

	i = 1;
	while (i <= y)
	{
		if (i == 1)
			line(x, 'A', 'B', 'A');
		else if (i < y)
			line(x, 'B', 32, 'B');
		else if (i == y)
			line(x, 'C', 'B', 'C');
		i++;
		if (x >= 0 && y >= 0)
			ft_putchar(10);
	}
}
