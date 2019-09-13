/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yitseng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 14:47:26 by yitseng           #+#    #+#             */
/*   Updated: 2019/07/12 11:09:06 by yitseng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char    *ft_strncat(char *dest, char *src, unsigned int nb);

int		main(void)
{
	char	dest[30] = "!! hey";
	char	src[20] = "Hello world";

//	printf("%s\n", ft_strncat(dest, src, 3));
	printf("%s\n", strncat(dest, src, 3));
	return (0);
}
