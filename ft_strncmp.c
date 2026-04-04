/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strncmp.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: alkhan <marvin@42.fr>                         +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/03/13 17:13:29 by alkhan         #+#    #+#                */
/*   Updated: 2026/03/24 15:37:53 by alkhan         ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t			i;
	unsigned char	*cstr1;
	unsigned char	*cstr2;

	cstr1 = (unsigned char *)str1;
	cstr2 = (unsigned char *)str2;
	i = 0;
	while ((cstr1[i] || cstr2[i]) && i < n)
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
	const char	str1[] = "test\0hj3232";
	const char	str2[] = "test\2870";
	size_t		n;

	n = 9;
	printf("\n%d\n",ft_strncmp(str1,str2, n));
	printf("\n%d\n",strncmp(str1,str2, n));
	return (0);
}
*/
