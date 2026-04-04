/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_isascii.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: alkhan <marvin@42.fr>                         +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/03/10 11:09:01 by alkhan         #+#    #+#                */
/*   Updated: 2026/03/10 13:17:23 by alkhan         ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	printf("%d\n", ft_isascii(127));
	return(0);
}
*/
