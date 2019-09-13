/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   check_map.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yictseng <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/21 11:23:55 by yictseng     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/21 18:44:27 by yictseng    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int		ft_atoi(char *str, int i)
{
	int j;
	int res;

	res = 0;
	j = 0;
	while (str[j] >= '0' && str[j] <= '9' && j < i - 3)
	{
		res = res * 10 + (str[j] - '0');
		j++;
	}
	return (res);
}

int		is_same_size(char *str, int nb_lines)
{
	int i;
	int j;

	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	j = 0;
	while (str[i])
	{
		if (str[i] != '\n')
			j++;
		i++;
	}
	if (j % nb_lines == 0)
		return (1);
	return (0);
}

int		is_obs(char *str, char obs)
{
	while (*str && *str != '\n')
		str++;
	while (*str)
	{
		if (!(*str == obs || *str == '\n'))
			return (0);
		str++;
	}
	return (1);
}

int		check_map(char *str)
{
	int		i;
	char	space;
	char	obs;

	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	obs = str[i - 2];
	space = str[i - 3];
	if (is_same_size(str, ft_atoi(str, i)))
	{
		while (str[i])
		{
			if (!(str[i] == space || str[i] == obs || str[i] == '\n'))
				return (0);
			i++;
		}
		if (is_obs(str, obs))
			return (0);
		return (1);
	}
	return (0);
}

void	ft_putstr(char *str)
{
	if (!check_map(str))
		write(1, "map error\n", 10);
}
