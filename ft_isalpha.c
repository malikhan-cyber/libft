/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_isalpha.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: alkhan <marvin@42.fr>                         +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/03/09 13:59:02 by alkhan         #+#    #+#                */
/*   Updated: 2026/03/24 13:40:28 by alkhan         ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	printf("%d\n",ft_isalpha(1));
	printf("%d\n",ft_isalpha('a'));
	printf("%d\n",ft_isalpha('S'));
	return(0);
}
*/
