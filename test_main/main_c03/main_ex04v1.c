/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yitseng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 18:37:59 by yitseng           #+#    #+#             */
/*   Updated: 2019/07/14 10:56:00 by yitseng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char    *ft_strstr(char *str, char *to_find);

int		main()
{
	char str[] = "";
	char to_find[] = "";

	printf("%s\n", ft_strstr(str, to_find));

//	str[] = "hello";
//	to_find[] = "";
	printf("%s\n", strstr(str, to_find));
	return (0);
}
