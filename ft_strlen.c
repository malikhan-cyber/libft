/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strlen.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: alkhan <marvin@42.fr>                         +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/03/10 12:40:03 by alkhan         #+#    #+#                */
/*   Updated: 2026/03/21 12:31:57 by alkhan         ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

size_t	ft_strlen(const char *c)
{
	int	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}
/*
int	main(void)
{
	printf("%zu\n", ft_strlen("ditzijn14letters"));
	return(0);
}
*/
