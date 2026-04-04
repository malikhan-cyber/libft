/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_calloc.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: alkhan <marvin@42.fr>                         +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/03/17 11:33:58 by alkhan         #+#    #+#                */
/*   Updated: 2026/03/18 11:55:11 by alkhan         ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ptr;
	size_t	i;
	size_t	n;

	if (size != 0 && nmemb > UINT_MAX / size)
		return (0);
	n = nmemb * size;
	ptr = (char *)malloc(n);
	if (ptr == NULL)
		return (0);
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
/* 
int	main(void)
{
	ft_calloc(0, 0);
	return (0);
} 
 */