/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strchr.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: alkhan <marvin@42.fr>                         +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/03/13 14:31:34 by alkhan         #+#    #+#                */
/*   Updated: 2026/03/14 13:14:10 by alkhan         ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <string.h> */
#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int				i;
	int				result;
	unsigned char	cc;

	cc = (unsigned char)c;
	i = 0;
	result = 0;
	while (str[i] && str[i] != cc)
		i++;
	if (str[i] == '\0' && cc != '\0')
		return (0);
	result = i;
	return ((char *)(str + result));
}
/*
int	main(void)
{
	char	str[] = "teste";
	char	str2[] = "teste";
	int		c;

	c = 357;
	printf("\nreturn (value original: %s", strchr(str2, c)));
	printf("\nmy return (value: %s\n", ft_strchr(str, c)));
	return(0);
} */