/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   check_base.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ffaivre <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/10 18:14:24 by ffaivre      #+#   ##    ##    #+#       */
/*   Updated: 2019/08/11 17:52:38 by yictseng    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft.h"

int		test(int a, char *str)
{
	int b;
	int c1;
	int c2;
	int c3;
	int c4;

	b = -1;
	c1 = 0;
	c2 = 0;
	c3 = 0;
	c4 = 0;
	while (++b < 4)
	{
		if (str[a + b + b] == '1')
			c1 += 1;
		if (str[a + b + b] == '2')
			c2 += 1;
		if (str[a + b + b] == '3')
			c3 += 1;
		if (str[a + b + b] == '4')
			c4 += 1;
	}
	if (c1 > 1 || c2 > 3 || c3 > 2 || c4 > 1)
		return (0);
	return (1);
}

int		check_int(char *str)
{
	int a;

	a = 0;
	while (a <= 31)
	{
		if (test(a, str) == 0)
			return (0);
		a += 8;
	}
	return (1);
}
