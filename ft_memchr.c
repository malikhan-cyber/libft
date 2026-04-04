/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_memchr.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: alkhan <marvin@42.fr>                         +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/03/24 14:25:24 by alkhan         #+#    #+#                */
/*   Updated: 2026/03/24 14:47:37 by alkhan         ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*cs;
	size_t			i;

	cs = (unsigned char *)s;
	c = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (cs[i] == c)
			return (&cs[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	return(0);
}
*/
