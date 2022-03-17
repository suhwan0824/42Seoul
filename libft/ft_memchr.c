/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhyoon <suhyoon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 17:05:29 by suhyoon           #+#    #+#             */
/*   Updated: 2022/03/17 17:05:36 by suhyoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, size_t n)
{
    size_t	i;
    unsigned char	n_c;
    unsigned char	*ptr;

    i = 0;
    n_c = (unsigned char)c;
    ptr = (unsigned char*)s;
    while (i < n)
    {
	if (ptr[i] == n_c)
	    return ((void *)ptr + i);
	i++;
    }
    return ((void *)0);
}
