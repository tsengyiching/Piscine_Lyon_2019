/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yitseng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 10:43:39 by yitseng           #+#    #+#             */
/*   Updated: 2019/07/18 10:56:52 by yitseng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>
#include <stdlib.h>

int		ft_is_prime(int nb);

int		main(int argc, char **argv)
{
	(void)argc;
	printf("%d\n", ft_is_prime(atoi(argv[1])));
	return (0);
}
