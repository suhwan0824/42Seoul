/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhyoon <suhyoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 17:04:58 by suhyoon           #+#    #+#             */
/*   Updated: 2022/04/04 19:48:21 by suhyoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	t_c;
	char	*t_s;

	i = 0;
	t_c = (char)c;
	t_s = (char *)s;
	while (t_s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (t_s[i] == t_c)
			return (&t_s[i]);
		i--;
	}
	return (0);
}
