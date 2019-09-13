/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_split.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: exam <marvin@le-101.fr>                    +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/23 16:53:39 by exam         #+#   ##    ##    #+#       */
/*   Updated: 2019/08/23 17:31:58 by exam        ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

int		c_is_sep(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

int		how_many_strs(char *str)
{
	int i;
	int nb;

	i = 0;
	nb = 0;

	if (str[i] && !c_is_sep(str[i]))
		nb++;
	while (str[i])
	{
		if (str[i] && !c_is_sep(str[i]) && c_is_sep(str[i - 1]))
			nb++;
		while (str[i] && !c_is_sep(str[i]))
			i++;
		while (str[i] && c_is_sep(str[i]))
			i++;
	}
	return (nb);
}

int		str_to_array(char *str, char **array, int *i)
{
	int j;
	int k;

	while (str[*i] && c_is_sep(str[*i]))
		(*i)++;
	j = 0;
	while (str[*i + j] && !c_is_sep(str[*i + j]))
		j++;
	if (!(*array = malloc(sizeof(char) * (j + 1))))
		return (0);
	k = 0;
	while (str[*i] && !c_is_sep(str[*i]))
	{
		(*array)[k] = str[*i];
		k++;
		(*i)++;
	}
	(*array)[k] = '\0';
	return (1);
}

char    **ft_split(char *str)
{
	char	**array;
	int 	nb_str;
	int		i;
	int		count;

	if(str == 0)
		return (0);
	nb_str = how_many_strs(str);
	if(!(array = malloc(sizeof(char *) * (nb_str + 1))))
		return (0);
	array[nb_str] = 0;
	count = 0;
	while (count < nb_str)
	{
		if (!str_to_array(str, &array[count], &i))
			return (0);
		count++;
	}
	return (array);
}
