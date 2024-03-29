/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   check_c.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ffaivre <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/10 20:32:50 by ffaivre      #+#   ##    ##    #+#       */
/*   Updated: 2019/08/11 17:52:15 by yictseng    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft.h"

int		check_str(char *str)
{
	int len;
	int i;

	len = ft_strlen(str);
	if (len != 31)
		return (0);
	i = 0;
	while (i < len)
	{
		if (i % 2 != 0 && str[i] != ' ')
			return (0);
		if (i % 2 == 0 && (str[i] < '1' || str[i] > '4'))
			return (0);
		i++;
	}
	return (1);
}
