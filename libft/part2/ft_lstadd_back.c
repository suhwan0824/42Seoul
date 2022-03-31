/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhyoon <suhyoon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 20:31:26 by suhyoon           #+#    #+#             */
/*   Updated: 2022/03/31 20:49:00 by suhyoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr;

	ptr = ft_lstlast(*lst);
	if (!lst || !new)
		return ;
	if (ptr == 0)
	{
		*lst = new;
		return ;
	}
	new -> next = ptr -> next;
	ptr -> next = new;
}
