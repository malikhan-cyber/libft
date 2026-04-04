/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_bzero.c                                          :+:    :+:           */
/*                                                      +:+                   */
/*   By: alkhan <marvin@42.fr>                         +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/03/14 16:27:56 by alkhan         #+#    #+#                */
/*   Updated: 2026/03/27 11:16:48 by alkhan         ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <strings.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*cs;

	cs = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		cs[i] = '\0';
		i++;
	}
}
/*
int	main(void)
{
	char	s[] = "hallo";
	int		n;

	n = 10;
	ft_bzero(s, n);
	return (0);
}
*/
