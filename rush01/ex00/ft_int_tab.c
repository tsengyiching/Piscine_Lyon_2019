/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_int_tab.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yictseng <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/10 18:14:21 by yictseng     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/12 15:13:28 by yictseng    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft.h"

int		*ft_int_tab(char *str)
{
	int *tab;
	int len;
	int i;
	int j;

	len = ft_strlen(str) - 15;
	if (!(tab = (int*)malloc(sizeof(int) * len)))
		return (0);
	i = 0;
	while (i < len)
	{
		j = 0;
		while (str[j])
		{
			if (str[j] >= '1' && str[j] <= '4')
			{
				tab[i] = str[j] - '0';
				i++;
			}
			j++;
		}
	}
	return (tab);
}
