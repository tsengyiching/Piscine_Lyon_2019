/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_tablen.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yictseng <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/09 13:27:12 by yictseng     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/09 13:43:56 by yictseng    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		main(int ac, char **av)
{
	if (ac == 0)
		return (0);
	else
	{
		int i;
		int res;

		i = 0;
		while (++i < ac)
		{
			res = res + ft_strlen(av[i]);
		}
		printf("%d\n", res);
	}
	return (0);
}
