/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_putendl_fd.c                                     :+:    :+:           */
/*                                                      +:+                   */
/*   By: alkhan <marvin@42.fr>                         +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/03/25 10:51:36 by alkhan         #+#    #+#                */
/*   Updated: 2026/03/25 10:59:41 by alkhan         ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
	if (s[i] == 0)
		write(fd, "\n", 1);
}
/* 
int	main(void)
{
	char	s[] = "testen";
	int		fd;

	fd = 1;
	ft_putendl_fd(s, fd);
	return (0);
}
 */