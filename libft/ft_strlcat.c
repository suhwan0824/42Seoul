/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhyoon <suhyoon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 17:03:23 by suhyoon           #+#    #+#             */
/*   Updated: 2022/03/17 17:22:10 by suhyoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h" 
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	d_len;
	unsigned int	s_len;

	i = 0;
	j = 0;
	d_len = ft_strlen(dest);
	j = d_len;
	s_len = ft_strlen(src);
	if (size <= d_len)
		return (s_len + size);
	while (src[i] != '\0' && i + 1 + d_len < dstsize)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (d_len + s_len);
}
