/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   only_z.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: exam <marvin@le-101.fr>                    +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/09 18:03:35 by exam         #+#   ##    ##    #+#       */
/*   Updated: 2019/08/09 18:06:21 by exam        ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

int		main(void)
{
	write(1, "z", 1);
	return (0);
}