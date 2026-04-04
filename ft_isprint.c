/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_isprint.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: alkhan <marvin@42.fr>                         +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/03/10 15:45:13 by alkhan         #+#    #+#                */
/*   Updated: 2026/03/10 16:38:16 by alkhan         ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	printf("%d\n", ft_isprint('\n'));
	printf("%d\n", ft_isprint('\0'));
	printf("%d\n", ft_isprint('n'));
	printf("%d\n", ft_isprint('7'));
	printf("%d\n", ft_isprint(0));
	printf("%d\n", ft_isprint(' '));
	return(0);
}
*/
