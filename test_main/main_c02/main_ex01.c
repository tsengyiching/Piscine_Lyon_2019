/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yitseng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 15:28:12 by yitseng           #+#    #+#             */
/*   Updated: 2019/07/10 17:27:03 by yitseng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	char dest[] = "1234567890";
	char src[] = "Hello world !";

	printf("%s\n", ft_strncpy(dest, src, 10));
//	printf("%s\n", strncpy(dest, src, 10));

	return (0);
}
