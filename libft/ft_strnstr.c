/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhyoon <suhyoon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 17:05:57 by suhyoon           #+#    #+#             */
/*   Updated: 2022/04/04 21:01:27 by suhyoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *bag, const char *one, size_t len)
{
	size_t	b_len;
	size_t	o_len;
	size_t	size;

	if (*one == '\0')
		return ((char *)bag);
	b_len = ft_strlen(bag);
	o_len = ft_strlen(one);
	if (b_len < o_len || len < o_len)
		return (0);
	if (b_len > len)
		size = len;
	else
		size = b_len;
	while (size-- >= o_len)
	{
		if(ft_memcmp(bag, one, o_len) == 0)
			return ((char *)bag);
		bag++;
	}
	return (0);
}
