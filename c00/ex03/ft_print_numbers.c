/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_numbers.c                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yictseng <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/30 20:00:08 by yictseng     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/30 20:01:52 by yictseng    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char i;

	i = '0';
	while (i <= '9')
	{
		write(1, &i, 1);
		i++;
	}
}
