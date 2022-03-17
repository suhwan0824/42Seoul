/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhyoon <suhyoon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 17:02:48 by suhyoon           #+#    #+#             */
/*   Updated: 2022/03/17 17:02:49 by suhyoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		t_dst;
	const unsigned char	t_src;

	t_dst = (unsigned char*)dst;
	t_src = (const unsigned char*)src;

	if (t_dst == NULL && t_src == NULL)
		return (NULL);
	if (dest < src)
	{
		i = 0;
		while (i < len)
		{
			t_dst[i] = t_src[i];
			i++;
		}
	}
	else
	{
		i = len;
		while (i)
		{
			t_dst[i] = t_src[i];
			i--;
		}
	}
	return (dst);
}
