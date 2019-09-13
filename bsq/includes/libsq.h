/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   libsq.h                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: wperu <marvin@le-101.fr>                   +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/21 22:17:47 by wperu        #+#   ##    ##    #+#       */
/*   Updated: 2019/08/21 23:32:35 by wperu       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef LIBSQ_H

# define LIBSQ_H

typedef struct	s_co_sq
{
	int x_min;
	int y_min;
	int x_max;
	int y_max;
}				t_co_sq;

typedef struct	s_algo
{
	int sort;
	int ok;
	int y_map;
	int x_map;
	int x;
	int y;
}				t_algo;

typedef struct	s_tl
{
	int x_max;
	int y_max;
}				t_tl;

typedef struct	s_tab
{
	char **data;
	char *dest;
}				t_tab;

extern t_co_sq	g_square_find;
extern t_algo	g_stock;
extern t_tl		g_square;
extern t_tl		g_lmap;
extern t_tab	g_data;

void			ft_verifsquare();
void			ft_square();
void			ft_save_sq();

#endif
