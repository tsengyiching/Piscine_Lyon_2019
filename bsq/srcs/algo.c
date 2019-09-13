/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   algo.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: wperu <marvin@le-101.fr>                   +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/20 14:48:45 by wperu        #+#   ##    ##    #+#       */
/*   Updated: 2019/08/21 23:19:16 by wperu       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libsq.h"

t_co_sq	g_square_find;
t_algo	g_stock;
t_tl	g_square;
t_tl	g_lmap;

void	ft_save_sq(void)
{
	square_find.x_min = x_map;
	square_find.y_min = y_map;
	square_find.x_max = x;
	square_find.y_max = y;
}

void	ft_verifsquare(int **map)
{
	while (g_stock.x < square.x_max)
	{
		g_stock.y = g_stock.y_map;
		if (square.y_max + g_stock.y < lmap.y_max)
		{
			while (g_stock.y < square.y_max)
			{
				if (map[g_stock.x][g_stock.y] == 1)
				{
					g_stock.sort = 1;
					break ;
				}
				g_stock.y++;
			}
		}
		if (g_stock.sort == 1)
			break ;
		x++;
	}
}

void	ft_algo(void)
{
	g_stock.x_map = 0;
	while (g_stock.x_map < g_lmap.x_max)
	{
		g_stock.y_map = 0;
		while (g_stock.y_map < g_lmap.y_max)
		{
			g_stock.x = g_stock.x_map;
			if (square.x_max + x < lmap.x_max)
			{
				ft_verifsquare();
			}
			if (g_stock.x == square.x_max && g_stock.y == square.y_max)
			{
				g_stock.ok = 1;
				break ;
			}
			g_stock.y_map++;
		}
		if (g_stock.ok == 1)
			break ;
		g_stock.x_map++;
	}
}

void	ft_square(void)
{
	if (ok == 1)
	{
		ft_save_sq();
		g_square.x_max++;
		g_square.y_max++;
		ft_square();
	}
}
