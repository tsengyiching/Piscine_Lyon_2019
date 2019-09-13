/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_split.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yictseng <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/22 10:41:00 by yictseng     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/22 10:44:01 by yictseng    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

int		is_charset(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int		ft_nb_str(char *str, char *charset)
{
	int nb;
	int i;

	i = 0;
	nb = 0;
	if (str[i] && !is_charset(str[i], charset))
		nb++;
	i++;
	while (str[i])
	{
		if (!is_charset(str[i], charset) && is_charset(str[i - 1], charset))
			nb++;
		while (str[i] && !is_charset(str[i], charset))
			i++;
		while (str[i] && is_charset(str[i], charset))
			i++;
	}
	return (nb);
}

int		ft_strdup(char *str, char *charset, char **target, int *i)
{
	int j;
	int k;

	while (str[*i] && is_charset(str[*i], charset))
		(*i)++;
	j = 0;
	while (str[*i + j] && !is_charset(str[*i + j], charset))
		j++;
	if (!(*target = malloc(sizeof(char) * (j + 1))))
		return (0);
	k = 0;
	while (str[*i] && !is_charset(str[*i], charset))
	{
		(*target)[k] = str[*i];
		k++;
		(*i)++;
	}
	(*target)[k] = '\0';
	return (1);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		count;
	int		nb_str;
	char	**target;

	i = 0;
	if (str == 0 || charset == 0)
		return (0);
	nb_str = ft_nb_str(str, charset);
	if (!(target = malloc(sizeof(char *) * (nb_str + 1))))
		return (0);
	target[nb_str] = 0;
	count = 0;
	while (count < nb_str)
	{
		if (!ft_strdup(str, charset, &target[count], &i))
			return (0);
		count++;
	}
	return (target);
}
