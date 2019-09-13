/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex02.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yitseng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 14:32:41 by yitseng           #+#    #+#             */
/*   Updated: 2019/07/22 16:20:54 by yitseng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int     ft_ultimate_range(int **range, int min, int max);

int		main()
{
	int *tab[5];
	printf("%d\n",ft_ultimate_range(tab, 0, 5));
	//printf("%d\n", *res);
	return (0);
}
