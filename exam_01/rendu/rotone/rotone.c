/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   rotone.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: exam <marvin@le-101.fr>                    +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/09 18:17:45 by exam         #+#   ##    ##    #+#       */
/*   Updated: 2019/08/09 18:24:13 by exam        ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

int		main(int ac, char **av)
{
	int i;
	char *str;

	if (ac != 2)
		write(1, "\n", 1);
	else
	{
		i = 0;
		str = av[1];
		while (str[i])
		{
			if (str[i] == 'z')
				str[i] = 'a';
			else if (str[i] == 'Z')
				str[i] = 'A';
			else if ((str[i] >= 'a' && str[i] < 'z')
					|| (str[i] >= 'A' && str[i] < 'Z'))
				str[i] = str[i] + 1;
			write(1, &str[i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
