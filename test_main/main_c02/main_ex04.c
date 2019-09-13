#include <stdio.h>

int		ft_str_is_lowercase(char *str);

int		main(void)
{
	int i;

	char *str = "rleejw&^abc";
	i = ft_str_is_lowercase(str);
	printf("%d", i);
	return 0;
}
