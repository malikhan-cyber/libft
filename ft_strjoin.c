/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strjoin.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: alkhan <marvin@42.fr>                         +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/03/18 15:17:24 by alkhan         #+#    #+#                */
/*   Updated: 2026/03/18 15:33:23 by alkhan         ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		len;
	char	*ptr;

	len = (ft_strlen(s1) + ft_strlen(s2));
	ptr = malloc(len + 1);
	if (ptr == 0)
		return (0);
	i = 0;
	j = 0;
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*
int	main(void)
{
	char const	str1[] = "deze twee zinnen ";
	char const	str2[] = "horen bij elkaar";

	ft_strjoin(str1, str2);
	return (0);
}
*/