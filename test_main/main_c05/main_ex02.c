/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yitseng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 11:57:52 by yitseng           #+#    #+#             */
/*   Updated: 2019/07/17 14:31:02 by yitseng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_power(int nb, int power);

int main()
{
	int a;
	int b;

	a = 1;
	b = -1;
	printf("%d\n", ft_iterative_power(a, b));
	return (0);
}
