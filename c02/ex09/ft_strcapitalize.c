/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcapitalize.c                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yictseng <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/02 16:27:06 by yictseng     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/04 14:58:15 by yictseng    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		up;
	char	*newstr;

	i = 0;
	up = 1;
	newstr = ft_strlowcase(str);
	while (newstr[i])
	{
		if (newstr[i] >= 'a' && newstr[i] <= 'z')
		{
			if (up == 1)
			{
				newstr[i] = newstr[i] - 32;
				up = 0;
			}
		}
		else if (newstr[i] >= '0' && newstr[i] <= '9')
			up = 0;
		else
			up = 1;
		i++;
	}
	return (newstr);
}
