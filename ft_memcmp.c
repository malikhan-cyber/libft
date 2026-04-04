/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_memcmp.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: alkhan <marvin@42.fr>                         +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/03/17 10:42:13 by alkhan         #+#    #+#                */
/*   Updated: 2026/03/21 11:57:15 by alkhan         ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*cstr1;
	unsigned char	*cstr2;
	size_t			i;

	cstr1 = (unsigned char *)str1;
	cstr2 = (unsigned char *)str2;
	i = 0;
	while (i < n)
	{
		if (cstr1[i] != cstr2[i])
			return (cstr1[i] - cstr2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	unsigned char	str1[] = "eventesten";
	unsigned char	str2[] = "eventesten";
	size_t			n;

	n = 13;
	printf("\nreturn (value my funtcion: %d\n", ft_memcmp(str1, str2, n)));
	printf("\nreturn (value original function: %d\n", memcmp(str1, str2, n)));
	return(0);
}
*/
