/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yitseng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 08:23:35 by yitseng           #+#    #+#             */
/*   Updated: 2019/07/12 10:51:36 by yitseng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int		ft_strcmp(char *s1, char *s2);

int		main()
{
	char *s1 = "123456";
	char *s2 = "134567";
	char *s3 = " BCDE";	
	char *s4 = "\0";

	printf("%d\n", ft_strcmp(s1, s2));
	printf("%d\n", ft_strcmp(s1, s3));
	printf("%d\n", ft_strcmp(s1, s4));
	printf("strcmp(s1, s2) : %d\n", strcmp(s1, s2));
	printf("strcmp(s1, s3) : %d\n", strcmp(s1, s3));
	printf("strcmp(s1, s4) : %d\n", strcmp(s1, s4));
	return 0;
}
