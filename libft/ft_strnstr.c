/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhyoon <suhyoon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 17:05:57 by suhyoon           #+#    #+#             */
/*   Updated: 2022/03/17 17:06:06 by suhyoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t	i;
    size_t	tmp;

    i = 0;
    while (haystack[i] != '\0' && i < len)
    {
	tmp = 0;
	if (needle[tmp] == haystack[i + tmp])
	{
	    while (needle[tmp] != '\0' && haystack[i + tmp] != '\0')
	    {
		if ((needle[tmp] != haystack[i + tmp]) || (i + tmp >= len))
		    break;
		tmp++;
	    }
	    if (needle[tmp] == '\0')
		return (&((char*)haystack)[i]);
	}
	i++;
    }
    return (0);
}
