/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhyoon <suhyoon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 17:05:29 by suhyoon           #+#    #+#             */
/*   Updated: 2022/03/29 16:45:33 by suhyoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	n_c;
	unsigned char	*ptr;

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
