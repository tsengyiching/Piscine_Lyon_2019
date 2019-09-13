/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   inter.c                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yictseng <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/22 15:41:59 by yictseng     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/22 18:40:41 by yictseng    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

int		is_dup(char c, char *s1, int *i)
{
	int j;

	j = *i - 1;
	while (s1[j] && j >= 0)
	{
		if (c == s1[j])
			return (1);
		j--;
	}
	return (0);
}

int		main(int ac, char **av)
{
	int i;
	int j;
	char *s1;
	char *s2;

	if (ac != 3)
		write(1, "\n", 1);
	else
	{
		i = 0;
		j = 0;
		s1 = av[1];
		s2 = av[2];
		if (s1[i] != '\0')
			i++;
		while (s1[i])
		{
			if (is_dup(s1[i], s1, &i))
				i++;
			while(s2[j])
			{
				while (s1[i] != s2[j] && j < i)
					j++;
				if (j == i)
					write(1, &s1[i], 1);
				i++;
				j = 0;
			}
		}
	}
}
