/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_lstlast.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: alkhan <marvin@42.fr>                         +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/03/27 11:34:39 by alkhan         #+#    #+#                */
/*   Updated: 2026/03/27 14:18:30 by alkhan         ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst)
	{
		if (lst->next == NULL)
			return (lst);
		lst = lst->next;
	}
	return (0);
}
