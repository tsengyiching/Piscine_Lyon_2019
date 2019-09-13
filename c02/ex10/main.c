#include <stdio.h>
#include <string.h>

//char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	char dest[] = "Bonjour";
	char src[] = "pouet";
	unsigned int i;
	unsigned int j;

	i = 7;
	j = strlcpy(dest, src, i);
	//printf("%s\n", ft_strncpy(dest, src, 7));
	printf("%d\n", j);
	printf("%s\n", dest);
	return (0);
}
