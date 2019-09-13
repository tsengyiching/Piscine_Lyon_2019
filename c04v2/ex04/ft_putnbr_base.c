/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putnbr_base.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yictseng <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/07 10:36:38 by yictseng     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/08 16:12:53 by yictseng    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_is_alphanum(char *base)
{
	while (*base)
	{
		if (!((*base >= 'a' && *base <= 'z') || (*base >= 'A' && *base <= 'Z')
					|| (*base >= '0' && *base <= '9')))
			return (0);
		base++;
	}
	return (1);
}

int		ft_check(char *base, int *base_len)
{
	int i;
	int j;

	i = 0;
	if (ft_is_alphanum(base) == 0)
		return (0);
	if (*base_len == '\0' || *base_len == 1)
		return (0);
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr(int nbr, char *base, int *base_len)
{
	long int	n;
	int			res;

	n = nbr;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	res = n % *base_len;
	n = n / *base_len;
	if (n != 0)
		ft_putnbr(n, base, base_len);
	ft_putchar(base[res]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int len;
	int *base_len;

	len = 0;
	while (base[len])
	{
		len++;
	}
	base_len = &len;
	if (ft_check(base, base_len) == 1)
	{
		ft_putnbr(nbr, base, base_len);
	}
}
