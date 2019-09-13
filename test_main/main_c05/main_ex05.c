/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yitseng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 08:37:19 by yitseng           #+#    #+#             */
/*   Updated: 2019/07/18 08:39:58 by yitseng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>
#include <stdlib.h>

int		ft_sqrt(int nb);

int		main(int argc, char **argv)
{
	(void)argc;
	printf("%d\n", ft_sqrt(atoi(argv[1])));
	return (0);
}
