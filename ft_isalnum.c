/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_isalnum.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: alkhan <marvin@42.fr>                         +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/03/10 10:54:03 by alkhan         #+#    #+#                */
/*   Updated: 2026/03/24 12:40:04 by alkhan         ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	printf("%d\n", ft_isalnum('-'));
	printf("%d\n", ft_isalnum('a'));
	printf("%d\n", ft_isalnum('A'));
	printf("%d\n", ft_isalnum(0));
	return(0);
}
*/

// if ()
// return ((c >= 0 && c <= 9) || (c >= 65 && c <= 90)
//		|| (c >= 97 && c <= 122))
// ft_isdigit
// ft_isascii

// return (ft_isdigit() || ft_isascii())
