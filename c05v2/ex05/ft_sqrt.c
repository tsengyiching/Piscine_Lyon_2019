/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_sqrt.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yictseng <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/11 15:55:26 by yictseng     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/13 11:21:37 by yictseng    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int i;
	int res;

	i = 2;
	res = 1;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	if (nb >= 100000000)
		i = 10000;
	while (i <= nb / i)
	{
		res = i * i;
		if (res == nb)
			return (i);
		i++;
	}
	return (0);
}
