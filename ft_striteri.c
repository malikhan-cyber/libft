/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_striteri.c                                       :+:    :+:           */
/*                                                      +:+                   */
/*   By: alkhan <marvin@42.fr>                         +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/03/23 16:42:40 by alkhan         #+#    #+#                */
/*   Updated: 2026/03/23 17:10:52 by alkhan         ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}
/*
int	main(void)
{
	char	s[] = "testing";

	ft_striteri(s);
	return(0);
}
*/
