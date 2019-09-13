/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strjoin.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yictseng <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/13 20:04:21 by yictseng     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/21 19:05:18 by yictseng    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_strsep(int size, char *dest, char **strs, char *sep)
{
	int i;
	int j;
	int k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			dest[k] = strs[i][j];
			k++;
			j++;
		}
		j = 0;
		while (sep[j] && i < size - 1)
		{
			dest[k] = sep[j];
			k++;
			j++;
		}
		i++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	char	*dest;

	if (size == 0)
	{
		dest = malloc(sizeof(char) * 1);
		*dest = 0;
		return (dest);
	}
	i = 0;
	len = 0;
	while (i < size)
	{
		len = len + ft_strlen(strs[i]);
		i++;
	}
	len = len + ft_strlen(sep) * (size - 1);
	if (!(dest = (char*)malloc(sizeof(char) * (len + 1))))
		return (0);
	ft_strsep(size, dest, strs, sep);
	dest[len] = '\0';
	return (dest);
}
