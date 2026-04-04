/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strnstr.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: alkhan <marvin@42.fr>                         +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/03/13 18:01:14 by alkhan         #+#    #+#                */
/*   Updated: 2026/03/21 12:13:11 by alkhan         ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//#include <bsd/string.h>
//#include <stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[i] == '\0')
		return ((char *)(big));
	while (big[i] && i < len)
	{
		j = 0;
		while (little[j] && (i + j < len) && (big[i + j] == little[j]))
			j++;
		if (little[j] == '\0')
			return ((char *)(&big[i]));
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	const char	big[] = "Foo Bar Baz";
	const char	little[] = " ";
	const char	big2[] = "Foo Bar Baz";
	const char	little2[] = " ";
	size_t		len;

	len = 8;
	printf("\nMy funtcion return: %s\n", ft_strnstr(big, little, len));
	printf("\nOriginal funtion return: %s\n",strnstr(big2, little2, len));
	return(0);
}
*/
