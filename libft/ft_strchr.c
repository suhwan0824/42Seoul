/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhyoon <suhyoon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 17:04:40 by suhyoon           #+#    #+#             */
/*   Updated: 2022/03/17 17:04:49 by suhyoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
    int		i;
    char	t_c;
    char	*t_s;

    i = 0;
    t_c = (char)c;
    t_s = (char*)s;
    while (t_s[i] != t_c)
    {
	if (t_s[i] == '\0')
	    return (0);
	i++;
    }
    return (&t_s[i]);
}
