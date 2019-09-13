/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ffaivre <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/10 16:12:36 by ffaivre      #+#   ##    ##    #+#       */
/*   Updated: 2019/08/11 18:03:52 by yictseng    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft.h"

int		main(int argc, char **argv)
{
	char *str;

	if (argc != 2)
		write(1, "Error\n", 6);
	else
	{
		str = argv[1];
		if (check_str(str) == 0 || check_int(str) == 0)
			write(1, "Error\n", 6);
		else
		{
			if(!solve(ft_int_tab(str)))
				write(1, "Error\n", 6);
		}
	}
	return (0);
}
