/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft.h                                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yictseng <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/11 14:11:57 by yictseng     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/11 18:04:58 by yictseng    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <stdlib.h>

int		check_str(char *str);
int		check_int(char *str);
int		ft_strlen(char *str);
int		*ft_int_tab(char *str);
int		last_tests(long n, int len, int *str);
int		solve(int *str);
void	draw(int *tab, int len);
#endif
