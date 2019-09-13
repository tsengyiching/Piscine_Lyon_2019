/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_rrange.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: exam <marvin@le-101.fr>                    +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/16 21:22:55 by exam         #+#   ##    ##    #+#       */
/*   Updated: 2019/08/16 21:23:53 by exam        ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	int i;
	int size;
	int *tab;

	if (start < end)
		size = end - start + 1;
	if (start > end)
		size = start - end + 1;
	if (start == end)
		size = 1;
	if (!(tab = (int*)malloc(sizeof(int) * size)))
		return (0);
	i = 0;
	*tab = 0;
	if (start < end)
	{
		while (i < size)
		{
			tab[i] = start;
			start++;
			i++;
		}
	}
	else if (start > end)
	{
		while (i < size)
		{
			tab[i] = start;
			start = start - 1;
			i++;
		}
	}
	else if (start == end)
		tab[i] = start;
	return (tab);
}
