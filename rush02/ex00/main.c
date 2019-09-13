/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   open.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yictseng <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/17 16:16:37 by yictseng     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/17 20:33:30 by yictseng    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft.h"

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

char	*lib_to_str(char *lib)
{
	int		i;
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];
	char	*str;

	fd = open(lib, O_RDONLY);
	if (fd == -1)
		ft_putstr("Dict Error\n");
	ret = read(fd, buf, BUF_SIZE);
	buf[ret] = '\0';
	if (!(str = malloc(sizeof(char) * ret)))
		return (0);
	i = 0;
	while (i < ret)
	{
		str[i] = buf[i];
		i++;
	}
	str[i] = '\0';
	close(fd);
	return (str);
}

int		main(int ac, char **av)
{
	char *str;
	char *lib;

	if (ac == 1 || ac > 3)
		write(1, "Error\n", 6);
	if (ac == 2)
	{
		lib = "numbers.dict";
		str = lib_to_str(lib);
		ft_strstr(str, av[1]);
	}
	if (ac == 3)
	{
		lib = av[1];
		str = lib_to_str(lib);
		ft_strstr(str, av[2]);
	}
	return (0);
}
