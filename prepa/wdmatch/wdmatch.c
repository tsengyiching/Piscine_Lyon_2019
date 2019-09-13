/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   wdmatch.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yictseng <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/16 14:23:37 by yictseng     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/16 15:48:19 by yictseng    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int		ft_check(char *s1, char *s2)
{
	int i;
	int j;
	int count;

	i = 0;
	j = 0;
	count = 0;
	while (s1[i] && s2[j])
	{
		while (s1[i] == s2[j])
		{
			count++;
			i++;
		}
		j++;
	}
	return (count);
}

int		main(int ac, char **av)
{
	int len;
	
	if (ac != 3)
		write(1, "\n", 1);
	else
	{
		len = ft_strlen(av[1]);
		if (len == ft_check(av[1], av[2]))
		{
			ft_putstr(av[1]);
		}
		write(1, "\n", 1);
	}
	return (0);
}
