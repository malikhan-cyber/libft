/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strdup.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: alkhan <marvin@42.fr>                         +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/03/17 11:34:34 by alkhan         #+#    #+#                */
/*   Updated: 2026/03/18 12:43:20 by alkhan         ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
//#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		i;
	char	*ptr;

	i = 0;
	while (str[i])
		i++;
	ptr = malloc((i + 1) * sizeof(char));
	i = 0;
	if (ptr == 0)
		return (0);
	while (str[i])
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = 0;
	return (ptr);
}
/*
int	main(void)
{
	const char	str[] = "dit is een test";

	ft_strdup(str);
	return(0);
}
*/
