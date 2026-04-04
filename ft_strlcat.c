/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strlcat.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: alkhan <marvin@42.fr>                         +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/03/11 14:04:28 by alkhan         #+#    #+#                */
/*   Updated: 2026/03/24 16:47:07 by alkhan         ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <bsd/string.h>
//#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	result;
	size_t	maxsize;

	i = 0;
	j = ft_strlen(dst);
	maxsize = ft_strlen(dst) + ft_strlen(src);
	if (size > maxsize)
		size = maxsize + 1;
	while (j < size - 1 && size != 0)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	i = ft_strlen(src);
	j = 0;
	while (dst[j] && j < size)
		j++;
	result = i + j;
	if (result > maxsize)
		result = maxsize;
	return (result);
}
/* 
int	main(void)
{
	char	dest[] = "make";
	char	src[] = "thisline";
	char	dest1[] = "make";
	char	src1[] = "thisline";
	size_t	size;

	size = 1;
	printf("myfunction return value %zu\n", ft_strlcat(dest, src, size));
	printf("myfunction destination %s\n", dest);
	printf("myfunction source  %s\n", src);
	printf("myfunction size %zu\n\n", size);
	printf("orginal return value %zu\n", strlcat(dest1, src1, size));
	printf("orginal destination %s\n", dest1);
	printf("orginal source  %s\n", src1);
	printf("original size %zu\n", size);
	return (0);
}
  */