/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_lstiter.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: alkhan <marvin@42.fr>                         +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/03/27 14:23:35 by alkhan         #+#    #+#                */
/*   Updated: 2026/03/27 15:49:56 by alkhan         ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
