/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_putstr_fd.c                                      :+:    :+:           */
/*                                                      +:+                   */
/*   By: alkhan <marvin@42.fr>                         +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/03/25 10:35:15 by alkhan         #+#    #+#                */
/*   Updated: 2026/03/25 10:44:38 by alkhan         ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}
/* 
int	main(void)
{
	int		fd;
	char	s[] = "test!";

	fd = 1;
	ft_putstr_fd(s, fd);
	return (0);
}
 */