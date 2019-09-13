/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex00.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yitseng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 16:51:02 by yitseng           #+#    #+#             */
/*   Updated: 2019/07/22 10:36:43 by yitseng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char    *ft_strdup(char *src);

int		main()
{
	char a[] = "";
	char *b;
	
	b = ft_strdup(a);
	printf("%s\n", b);
//	b = strdup(a);
//	printf("%s\n", b);
	return (0);
}
