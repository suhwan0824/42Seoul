/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhyoon <suhyoon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 19:34:30 by suhyoon           #+#    #+#             */
/*   Updated: 2022/04/06 19:39:33 by suhyoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	get_len(int n)
{
	int	cnt;

	cnt = 0;
	if (n <= 0)
		cnt++;
	while (n)
	{
		cnt++;
		n = n / 10;
	}
	return (cnt);
}

char	*ft_itoa(int n)
{
	int			len;
	char		*res;
	long long	num;

	len = get_len(n);
	num = (long long)n;
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (0);
	if (num < 0)
	{
		res[0] = '-';
		num = -1 * num;
	}
	if (n == 0)
		res[0] = '0';
	res[len--] = '\0';
	while (num)
	{
		res[len] = num % 10 + '0';
		len--;
		num = num / 10;
	}
	return (res);
}
