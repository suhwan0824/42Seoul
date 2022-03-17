/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhyoon <suhyoon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 17:06:45 by suhyoon           #+#    #+#             */
/*   Updated: 2022/03/17 17:26:25 by suhyoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
char	*strdup(const char *src)
{
	char	*dest;
	int		i;

	i = 0;
	dest = (char *)malloc(sizeof(char) * ft_strlen(src));
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	if (!dest)
		return (0);
	return (dest);
}
