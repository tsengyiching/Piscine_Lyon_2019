/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   aff_z.c                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: exam <marvin@le-101.fr>                    +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/23 10:04:49 by exam         #+#   ##    ##    #+#       */
/*   Updated: 2019/08/23 10:06:22 by exam        ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

int		main(int ac, char **av)
{
	(void)ac;
	(void)av;
	write(1, "z\n", 2);
	return (0);
}

