/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_atoi.c                                           :+:    :+:           */
/*                                                      +:+                   */
/*   By: alkhan <marvin@42.fr>                         +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/03/10 15:31:17 by alkhan         #+#    #+#                */
/*   Updated: 2026/03/14 16:26:50 by alkhan         ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	result;
	int	neg;

	i = 0;
	result = 0;
	neg = 1;
	while (str[i] && ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13)))
		i++;
	if (str[i] == '-')
	{
		neg = -1;
		i++;
	}
	if (str[i] == '+' && neg != -1)
		i++;
	while (str[i] && ((str[i] >= '0') && (str[i] <= '9')))
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * neg);
}
/* 
int	main(void)
{
	printf("%d MyFunction \n", ft_atoi("\t\n\r\v\f  469 \n"));
	printf("%d OrgFunction \n", atoi("\t\n\r\v\f  469 \n"));
	printf("%d MyFunction \n", ft_atoi("    -125445mjss7"));
		printf("%d OrgFunction \n", atoi("     -125445mjss7"));
	printf("%d MyFunction \n", ft_atoi("- 125445mjss7"));
		printf("%d OrgFunction \n", atoi("- 125445mjss7"));
	printf("%d MyFunction \n", ft_atoi("a-125445mjss7"));
		printf("%d OrgFunction \n", atoi("a-125445mjss7"));
	return(0);
} */
