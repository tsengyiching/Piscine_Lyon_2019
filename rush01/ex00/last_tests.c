/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   last_tests.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlepart <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/11 16:23:14 by rlepart      #+#   ##    ##    #+#       */
/*   Updated: 2019/08/11 17:54:00 by yictseng    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft.h"

int		l_row_test(int *box, int *str)
{
	int	tab[5];

	tab[0] = 8;
	while (tab[0] < 12)
	{
		tab[4] = (tab[0] - 8) * 4 + 3;
		tab[3] = 0;
		tab[2] = 0;
		tab[1] = tab[4] - 3;
		while (tab[1] <= tab[4])
		{
			if (box[tab[1]] > tab[2])
			{
				tab[3]++;
				tab[2] = box[tab[1]];
			}
			tab[1]++;
		}
		if (str[tab[0]] != tab[3])
			return (0);
		tab[0]++;
	}
	return (1);
}

int		r_row_test(int *box, int *str)
{
	int	tab[5];

	tab[0] = 12;
	while (tab[0] < 16)
	{
		tab[4] = (tab[0] - 12) * 4;
		tab[3] = 0;
		tab[2] = 0;
		tab[1] = tab[4] + 3;
		while (tab[1] >= tab[4])
		{
			if (box[tab[1]] > tab[2])
			{
				tab[3]++;
				tab[2] = box[tab[1]];
			}
			tab[1]--;
		}
		if (str[tab[0]] != tab[3])
			return (0);
		tab[0]++;
	}
	return (1);
}

int		u_col_test(int *box, int *str)
{
	int	tab[5];

	tab[0] = 0;
	while (tab[0] < 4)
	{
		tab[4] = 12 + tab[0];
		tab[3] = 0;
		tab[2] = 0;
		tab[1] = tab[0];
		while (tab[1] <= tab[4])
		{
			if (box[tab[1]] > tab[2])
			{
				tab[3]++;
				tab[2] = box[tab[1]];
			}
			tab[1] = tab[1] + 4;
		}
		if (str[tab[0]] != tab[3])
			return (0);
		tab[0]++;
	}
	return (1);
}

int		d_col_test(int *box, int *str)
{
	int tab[5];

	tab[0] = 4;
	while (tab[0] < 8)
	{
		tab[4] = tab[0] - 4;
		tab[3] = 0;
		tab[2] = 0;
		tab[1] = 12 + tab[4];
		while (tab[1] >= tab[4])
		{
			if (box[tab[1]] > tab[2])
			{
				tab[3]++;
				tab[2] = box[tab[1]];
			}
			tab[1] = tab[1] - 4;
		}
		if (str[tab[0]] != tab[3])
			return (0);
		tab[0]++;
	}
	return (1);
}

int		last_tests(long n, int len, int *str)
{
	int		i;
	int		box[16];

	i = 0;
	while (i < 16)
	{
		box[16 - i - 1] = n % 10 + '0';
		i++;
		n = n / 10;
	}
	if (l_row_test(box, str) && r_row_test(box, str)
			&& d_col_test(box, str) && u_col_test(box, str))
	{
		draw(box, len);
		return (1);
	}
	return (0);
}
