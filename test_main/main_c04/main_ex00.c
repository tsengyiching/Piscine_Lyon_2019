/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yitseng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 11:39:51 by yitseng           #+#    #+#             */
/*   Updated: 2019/07/12 11:48:58 by yitseng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include <string.h>

int		ft_strlen(char *str);

int		main(void)
{
	int a;
	char *str = "geeks";

	a = strlen(str);
	printf("%d\n", ft_strlen(str));
	printf("Length of string is: %d", a);
	return 0; 
}
