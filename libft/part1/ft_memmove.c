/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhyoon <suhyoon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 17:02:48 by suhyoon           #+#    #+#             */
/*   Updated: 2022/03/31 21:53:40 by suhyoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*dest;
	const char	*source;

	dest = (char *)dst;
	source = (const char *)src;
	if (dst == src)
		return (dst);
	else if (dst < src)
	{
		while (len--)
			*dest++ = *source++;
	}
	else
	{
		dest += count;
		source += count;
		while (len--)
			*--dest = *--source;
	}
	return (dst);
}
