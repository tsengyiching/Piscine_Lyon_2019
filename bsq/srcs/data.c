/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   data.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: wperu <marvin@le-101.fr>                   +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/21 22:18:01 by wperu        #+#   ##    ##    #+#       */
/*   Updated: 2019/08/21 23:32:22 by wperu       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "libsq.h"

t_tab g_data;

char	*recup_data(int larg, int lngu)
{
	char	*dest;
	char	*buf;
	int		i;
	int		fd;
	int		ret;

	i = 0;
	dest = malloc(sizeof(char) * (larg * lngu));
	buf = malloc(sizeof(char) * 1);
	fd = open("exemple_file", O_RDONLY);
	while (buf[0] != '\n')
		ret = read(fd, buf, 1);
	ret = read(fd, buf, 1);
	while (ret != 0)
	{
		while (buf[0] != '\n')
		{
			dest[i++] = buf[0];
			ret = read(fd, buf, 1);
		}
		ret = read(fd, buf, 1);
	}
	free(buf);
	dest[i] = '\0';
	return (dest);
}

char	**crea_data(int larg, int lng)
{
	int		lngu;
	int		x;
	int		y;

	x = 0;
	y = 0;
	lngu = lng;
	g_data.data = 0;
	lng = 0;
	g_data.data = (char **)malloc(sizeof(char *) * (lngu + 1));
	while (lng < lngu)
		g_data.data[lng++] = (char *)malloc(sizeof(char) * (larg + 1));
	g_data.dest = recup_data(larg, lngu);
	lng = 0;
	while (data[y])
	{
		x = 0;
		while (x < larg)
			g_data_data[y][x++] = g_data.dest[lng++];
		y++;
	}
	y = 0;
	while (g_data.data[y])
		return (g_data.data);
}

void	read_map(int fd, int ret, int lng, int larg)
{
	char	*buf;

	buf = malloc(sizeof(char) * 1);
	fd = open("exemple_file", O_RDONLY);
	while (buf[0] != '\n')
		ret = read(fd, buf, 1);
	ret = read(fd, buf, 1);
	while (ret != 0)
	{
		while (buf[0] != '\n')
		{
			ret = read(fd, buf, 1);
			a++;
		}
		ret = read(fd, buf, 1);
		b++;
	}
	a = a / b;
	buf[ret] = '\0';
	free(buf);
	crea_data(lng, larg);
	close(fd);
}

void	type_call(void)
{
	int		fd;
	int		ret;
	int		lng;
	int		larg;

	lng = 0;
	larg = 0;
	fd = 0;
	ret = 0;
	read_map(fd, ret, lng, larg);
}

int		main(void)
{
	type_call();
	return (0);
}
