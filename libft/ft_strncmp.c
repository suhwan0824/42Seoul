/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhyoon <suhyoon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 17:05:13 by suhyoon           #+#    #+#             */
/*   Updated: 2022/03/17 17:05:22 by suhyoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t	i;

    i = 0;
    while (s1[i] && s2[i] && i < n)
    {
	if (s1[i] != s2[i])
	    break;
	i++;
    }
    if (i == n)
	return (0);
    return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
