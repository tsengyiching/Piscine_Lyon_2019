#include "ft_stock_str.h"
#include <libc.h>

void    ft_show_tab(struct s_stock_str *par);
struct	s_stock_str *ft_strs_to_tab(int ac, char **av);

int		main(void)
{
	int 	i;
	char	*str[] = {"123", "abc"};

	i = 2;
	ft_show_tab(ft_strs_to_tab(i, str));
			return (0);
}
