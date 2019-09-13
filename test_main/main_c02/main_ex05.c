#include <stdio.h>

int		ft_str_is_uppercase(char *str);

int		main(void)
{
	int i;

	char *str = "aAD";
	i = ft_str_is_uppercase(str);
	printf("%d", i);
	return 0;
}
