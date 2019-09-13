/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex01_arcv.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yitseng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 10:03:48 by yitseng           #+#    #+#             */
/*   Updated: 2019/07/22 12:08:50 by yitseng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int     *ft_range(int min, int max);

int        main(int argc, char **argv)
{
	int *tab;
	int i;
	int x;
	int y;

	if (argc != 3)
		return (0);
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	tab = ft_range(x, y);
	i = 0;
	while (i < y - x)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	return (0);
}
