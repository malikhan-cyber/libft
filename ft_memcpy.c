/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_memcpy.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: alkhan <marvin@42.fr>                         +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/03/14 17:00:51 by alkhan         #+#    #+#                */
/*   Updated: 2026/03/24 14:21:02 by alkhan         ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*cdest;
	unsigned char	*csrc;

	csrc = (unsigned char *)src;
	cdest = (unsigned char *)dest;
	if (dest == 0 && src == 0)
		return (dest);
	i = 0;
	while (i < n)
	{
		cdest[i] = csrc[i];
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	dest[] = "hallo";
	char	src[] = "tests";
		size_t	n;

		n = 10;
		ft_memcpy(dest, src, n);
	return(0);
}
*/
