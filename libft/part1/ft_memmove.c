/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhyoon <suhyoon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 17:02:48 by suhyoon           #+#    #+#             */
/*   Updated: 2022/03/29 16:41:49 by suhyoon          ###   ########.fr       */
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
	elif (dst < src)
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
