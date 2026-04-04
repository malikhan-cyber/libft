/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_tolower.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: alkhan <marvin@42.fr>                         +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/03/10 16:29:59 by alkhan         #+#    #+#                */
/*   Updated: 2026/03/10 16:39:28 by alkhan         ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}
/*
int	main(void)
{
	printf("%d\n", ft_tolower('U'));
	return(0);
}
*/
