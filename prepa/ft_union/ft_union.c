/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_union.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yictseng <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/22 16:10:43 by yictseng     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/22 16:11:11 by yictseng    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

int		main(int ac, char **av)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (ac != 3)
		write(1, "\n", 1);
	ft_strcat(av[1], av[2]);
	while (av[1][i])
	{
		while (j < i && av[1][i] != av[1][j])
			j++;
		if (i == j)
			write(1, &av[1][i], 1);
		i++;
		j = 0;
	}
	write(1, "\n", 1);
	return (0);
}
