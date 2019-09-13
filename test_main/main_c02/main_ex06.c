#include <stdio.h>

int		ft_str_is_printable(char *str);

int		main(void)
{
	int i;

	char *str = "dfé?`_|~% ('+\"";
	i = ft_str_is_printable(str);
	printf("%d", i);
	return 0;
}
