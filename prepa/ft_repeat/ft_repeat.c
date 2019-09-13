/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_repeat.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yictseng <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/09 14:03:16 by yictseng     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/09 16:09:23 by yictseng    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

int		ft_count(char c)
{
	int repeat;

	if (c >= 'a' && c <= 'z')
		repeat = c - 'a' + 1;
	else if (c >= 'A' && c <= 'Z')
		repeat = c - 'A' + 1;
	else
		repeat = 1;
	return (repeat);
}

int		main(int ac, char **av)
{
	int i;
	int repeat;
	char *str;
	
	if (ac != 2)
		return (0);
	else
	{
		i = 0;
		str = av[1];
		while (str[i])
		{
			repeat = ft_count(str[i]);
			while (repeat > 0)
			{
				write(1, &str[i], 1);
				repeat--;
			}
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
