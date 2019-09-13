/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yitseng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 08:23:35 by yitseng           #+#    #+#             */
/*   Updated: 2019/07/12 10:55:25 by yitseng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int		main()
{
	char *s1 = "abcde";
	char *s2 = "abCDE";
	char *s3 = "\0";	
	char *s4 = "a!";

	printf("%d\n", ft_strncmp(s1, s2, 3));
	printf("%d\n", ft_strncmp(s1, s3, 2));
	printf("%d\n", ft_strncmp(s1, s4, 2));
	printf("strncmp(s1, s2) : %d\n", strncmp(s1, s2, 3));
	printf("strncmp(s1, s3) : %d\n", strncmp(s1, s3, 2));
	printf("strncmp(s1, s4) : %d\n", strncmp(s1, s4, 2));
	return 0;
}
