/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex03.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yitseng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 22:03:13 by yitseng           #+#    #+#             */
/*   Updated: 2019/07/23 16:05:41 by yitseng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strjoin(int size, char **strs, char *sep);

int    main(int ac, char **ag)
{
	char sep[] = "LOL";
	
	//if (ac != 3)
	//	return (0);
	(void)ac;
	printf("%s", ft_strjoin(0, ag + 1, sep));
	return (0);
}
