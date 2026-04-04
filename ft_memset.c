/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_memset.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: alkhan <marvin@42.fr>                         +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/03/14 15:09:58 by alkhan         #+#    #+#                */
/*   Updated: 2026/03/24 13:57:59 by alkhan         ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*cs;

	cs = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		cs[i] = c;
		i++;
	}
	return (s);
}
/*
int	main(void)
{
	char	s[] = "hallo";
	int		c;
	size_t	n;

	c = 'a';
	n = 10;
	ft_memset(s, c, n);
	return (0);
}
*/
