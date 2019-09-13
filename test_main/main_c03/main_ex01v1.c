/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yitseng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 08:23:35 by yitseng           #+#    #+#             */
/*   Updated: 2019/07/12 14:32:38 by yitseng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int		main()
{
	char *s1 = "abcde";
	char *s2 = "aBCDE";

	printf("%d\n", ft_strncmp(s1, s2, 0));
	printf("strncmp(s1, s2) : %d\n", strncmp(s1, s2, 0));
	return 0;
}
