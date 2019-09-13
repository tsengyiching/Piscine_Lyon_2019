/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ro_13.c                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yictseng <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/09 16:30:43 by yictseng     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/09 16:39:35 by yictseng    ###    #+. /#+    ###.fr     */
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
			if ((str[i] >= 'a' && str[i] <= 'm')
					|| (str[i] >= 'A' && str[i] <= 'M'))
				str[i] = str[i] + 13;
			else if ((str[i] >= 'n' && str[i] <= 'z')
					|| (str[i] >= 'N' && str[i] <= 'Z'))
				str[i] = str[i] - 13;
			write(1, &str[i], 1);
			i++;
		}
	}
	return (0);
}
