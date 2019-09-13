/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   printing.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlepart <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/11 16:25:06 by rlepart      #+#   ##    ##    #+#       */
/*   Updated: 2019/08/11 17:54:59 by yictseng    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	draw(int *tab, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		ft_putchar(tab[i]);
		if (i % 4 == 3)
		{
			write(1, "\n", 1);
		}
		else
		{
			write(1, " ", 1);
		}
		i++;
	}
}
