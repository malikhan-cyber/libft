/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strmapi.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: alkhan <marvin@42.fr>                         +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/03/21 17:14:26 by alkhan         #+#    #+#                */
/*   Updated: 2026/03/25 10:23:00 by alkhan         ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str_result;

	str_result = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (str_result == 0)
		return (0);
	i = 0;
	while (s[i])
	{
		str_result[i] = f(i, s[i]);
		i++;
	}
	str_result[i] = '\0';
	return (str_result);
}
/*
int	main(void)
{
	char const	s[] = "testen";

	ft_strmapi(s, 0);
	return (0);
}*/
