/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_putnbr_fd.c                                      :+:    :+:           */
/*                                                      +:+                   */
/*   By: alkhan <marvin@42.fr>                         +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/03/25 11:06:18 by alkhan         #+#    #+#                */
/*   Updated: 2026/03/27 15:42:26 by alkhan         ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	ft_putchar_fd(((n % 10) + '0'), fd);
}
/*
int	main(void)
{
	int	n;
	int	fd;

	n = -54215;
	fd = 1;
	ft_putnbr_fd(n, fd);
	return (0);
}
 */
