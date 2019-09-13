#include <stdio.h>

int		ft_strlowcase(char *str);

int		main(void)
{
	char arr[] = "HeLLO";
	char *str = arr;

	ft_strlowcase(str);
	printf("%s", str);
	return 0;
}
