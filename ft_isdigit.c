/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_isdigit.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: alkhan <marvin@42.fr>                         +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/03/10 09:59:29 by alkhan         #+#    #+#                */
/*   Updated: 2026/03/24 12:38:51 by alkhan         ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//#include <ctype.h>
//#include <stdio.h>
#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	printf("%d\n",ft_isdigit(2));
	//printf("%d\n",isdigit(2));
	return(0);
}
*/
