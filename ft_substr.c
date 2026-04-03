/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_substr.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: alkhan <marvin@42.fr>                         +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/03/18 12:43:42 by alkhan         #+#    #+#                */
/*   Updated: 2026/03/21 14:02:02 by alkhan         ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	j;
	char	*ptr;

	j = 0;
	if (start >= ft_strlen(s))
	{
		ptr = malloc(1);
		if (!ptr)
			return (0);
		ptr[0] = '\0';
		return (ptr);
	}
	if (len > ft_strlen(&s[start]))
		ptr = malloc(ft_strlen(&s[start]) + 1);
	else
		ptr = malloc(len + 1);
	if (!ptr)
		return (0);
	while (s[start + j] && j < len)
	{
		ptr[j] = s[start + j];
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}
/*
int	main(void)
{
	char const		str[] = "";
	unsigned int	start;
	size_t			len;

	start = 0;
	len = 0;
	printf("%s\n",ft_substr(str, start, len));
	return (0);
		if ((slen - start) < len)
		len = slen - start;
}  */