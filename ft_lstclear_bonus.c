/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 17:47:58 by daxferna          #+#    #+#             */
/*   Updated: 2024/02/29 18:19:42 by daxferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		current = *lst;
		*lst = current->next;
		del(current->content);
		free(current);
	}
}
