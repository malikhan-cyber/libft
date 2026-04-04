/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strlcpy.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: alkhan <marvin@42.fr>                         +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/03/11 10:35:18 by alkhan         #+#    #+#                */
/*   Updated: 2026/03/24 12:57:22 by alkhan         ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//#include <bsd/string.h>
//#include <stdio.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	result;

	result = ft_strlen(src);
	i = 0;
	if (size > 0)
	{
		while (src[i] && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (result);
}
/*
int	main (void)
{
	char		dst[6];
	const char	src[] = "878545 ";
		char    dst2[6];
		const char      src2[] = "878545 ";
	size_t		size;

	size = 6;
	printf("\n%zu myfuntion return (\n",ft_strlcpy(dst, src, size)));
	printf("%s myfunction \n", dst);
		printf("%s myfunction \n", src);
		printf("%zu orgfunction \n", size);
	printf("\n%zu original return (\n",strlcpy(dst2,src2,size)));
	printf("%s orgfunction \n", dst2);
	printf("%s orgfunction \n", src2);
	printf("%zu orgfunction \n", size);
	return (0);
}
*/
