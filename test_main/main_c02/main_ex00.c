/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yitseng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 15:28:12 by yitseng           #+#    #+#             */
/*   Updated: 2019/07/10 17:17:19 by yitseng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int		main(void)
{
	char dest[] = "Hey !";
	char src[] = "Salut Yiching !";

	printf("%s\n", ft_strcpy(dest, src));
	printf("%s\n", strcpy(dest, src));
	return (0);
}
