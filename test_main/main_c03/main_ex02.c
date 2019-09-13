/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yitseng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 14:47:26 by yitseng           #+#    #+#             */
/*   Updated: 2019/07/12 11:04:00 by yitseng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char    *ft_strcat(char *dest, char *src);

int		main(void)
{
	char	dest[20] = " @@";
	char	src[10] = "12345";

//	printf("%s\n", ft_strcat(dest, src));
	printf("%s\n", strcat(dest, src));
	return (0);
}
