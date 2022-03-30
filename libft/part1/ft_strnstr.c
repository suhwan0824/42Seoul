/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhyoon <suhyoon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 17:05:57 by suhyoon           #+#    #+#             */
/*   Updated: 2022/03/28 20:04:51 by suhyoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *bag, const char *one, size_t len)
{
	size_t	i;
	size_t	tmp;

	i = 0;
	while (bag[i] != '\0' && i < len)
	{
		tmp = 0;
		if (one[tmp] == bag[i + tmp])
		{
			while (one[tmp] != '\0' && bag[i + tmp] != '\0')
			{
				if ((one[tmp] != bag[i + tmp]) || (i + tmp >= len))
					break ;
				tmp++;
			}
			if (one[tmp] == '\0')
				return (&((char *)bag)[i]);
		}
		i++;
	}
	return (0);
}
