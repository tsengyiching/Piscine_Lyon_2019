#include <stdio.h>

int		ft_strupcase(char *str);

int		main(void)
{
	char arr[] = "yicHing";
	char *str = arr;

	ft_strupcase(str);
	printf("%s", str);
	return 0;
}
