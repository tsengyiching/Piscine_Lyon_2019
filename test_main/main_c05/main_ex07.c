/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yitseng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 10:43:39 by yitseng           #+#    #+#             */
/*   Updated: 2019/07/18 12:14:46 by yitseng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>
#include <stdlib.h>

int		ft_find_next_prime(int nb);

int		main(int argc, char **argv)
{
	(void)argc;
	printf("%d\n", ft_find_next_prime(atoi(argv[1])));
	return (0);
}
