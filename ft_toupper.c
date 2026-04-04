/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_toupper.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: alkhan <marvin@42.fr>                         +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/03/10 12:52:17 by alkhan         #+#    #+#                */
/*   Updated: 2026/03/10 16:39:02 by alkhan         ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}
/*
int	main(void)
{
	printf("%d\n", ft_toupper('a'));
	return(0);
}
*/
