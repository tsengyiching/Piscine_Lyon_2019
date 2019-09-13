/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   last_word.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yictseng <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/16 12:00:08 by yictseng     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/16 12:44:08 by yictseng    ###    #+. /#+    ###.fr     */
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

int		ft_check(char *str)
{
	while (*str)
	{
		if(!(*str == '\0' || *str == ' ' || *str == '\t' || *str == '\n'))
			return (1);
		str++;
	}
	return (0);
}

int		main(int ac, char **av)
{
	char *str;
	int i;
	int j;

	str = av[1];
	if (ac != 2 || ft_check(str) == 0)
		write(1, "\n", 1);
	else
	{
		i = ft_strlen(str) - 1;
		while (str[i] == ' ' || str[i] == '\t')
			i--;
		while (str[i] != ' ' && str[i] != '\t' && i != -1)
			i--;
		j = i + 1;
		while (str[j] != '\0' && str[j] != ' ' && str[j] != '\t')
		{
			write(1, &str[j], 1);
			j++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
