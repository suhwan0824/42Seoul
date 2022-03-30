/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhyoon <suhyoon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 15:10:57 by suhyoon           #+#    #+#             */
/*   Updated: 2022/03/30 18:06:41 by suhyoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	get_len(long long n)
{
	int	cnt;

	cnt = 0;
	if (n < 0)
	{
		cnt += 1;
		n *= -1;
	}
	while (n > 0)
	{
		n /= 10;
		cnt += 1;
	}
	return (cnt);
}

char	*ft_itoa(int n)
{
	long long	num;
	int			len;
	char		*res;

	num = (long long)n;
	len = get_len(n);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (0);
	if (num < 0)
	{
		res[0] = '-';
		num *= -1;
	}
	res[len] = '\0';
	while (len >= 0)
	{
		len--;
		if (len == 0 && res[len] == '-')
			continue ;
		res[len] = num % 10 + '0';
		num /= 10;
	}
	return (res);
}
