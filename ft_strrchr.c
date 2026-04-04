/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strrchr.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: alkhan <marvin@42.fr>                         +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/03/13 14:30:19 by alkhan         #+#    #+#                */
/*   Updated: 2026/03/24 12:27:57 by alkhan         ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

char	*ft_strrchr(const char *str, int c)
{
	int				i;
	int				result;
	unsigned char	cc;

	i = 0;
	result = 0;
	cc = (unsigned char)c;
	if (str[i] == 0 && cc != 0)
		return (0);
	if (str[i] == 0)
		return ((char *)str);
	while (str[i])
		i++;
	while (i != 0)
	{
		if (str[i] == cc)
		{
			result = i;
			return ((char *)(str + result));
		}
		i--;
	}
	if (str[0] && str[0] != cc)
		return (0);
	return ((char *)(str + result));
}
/*
int	main(void)
{
	const   char	str2[] = "Bonjour";
	const	char	str[] = "Bonjour";
	int				c;

	c = 'a';
	printf("\nMy return (value: %s\n", ft_strrchr(str2, c)));
	printf("\nOriginal return (value: %s\n", strrchr(str, c)));
	return(0);
}
 */