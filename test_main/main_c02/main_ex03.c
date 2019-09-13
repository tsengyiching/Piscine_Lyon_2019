#include <stdio.h>

int		ft_str_is_numeric(char *str);

int		main(void)
{
	int i;
	char *str= "01&393042";

	i = ft_str_is_numeric(str);
	printf("%d", i);
	return 0;
}
