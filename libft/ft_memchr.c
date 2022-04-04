/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhyoon <suhyoon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 17:05:29 by suhyoon           #+#    #+#             */
/*   Updated: 2022/04/04 18:16:21 by suhyoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	n_c;
	unsigned char	*ptr;

	i = 0;
	n_c = (unsigned char)c;
	ptr = (unsigned char *)s;
	while (n-- > 0)
	{
		if (ptr[i] != n_c)
			ptr++;
		else
			return ((void *)ptr);
	}
	return (0);
}
