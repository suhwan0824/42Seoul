/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhyoon <suhyoon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 21:18:01 by suhyoon           #+#    #+#             */
/*   Updated: 2022/03/31 21:46:07 by suhyoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ptr;
	t_list	*tmp;

	if (!lst || !f)
		return (0);
	ptr = 0;
	while (lst)
	{
		tmp = ft_lstnew(f(lst -> content));
		if (!tmp)
		{
			ft_lstclear(&ptr, del);
			return (0);
		}
		ft_lstadd_back(&ptr, tmp);
		tmp = tmp -> next;
		lst = lst -> next;
	}
	return (ptr);
}
