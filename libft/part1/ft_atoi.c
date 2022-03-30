/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhyoon <suhyoon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 16:47:02 by suhyoon           #+#    #+#             */
/*   Updated: 2022/03/28 14:11:33 by suhyoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	first(char *str, int *i_ptr)
{
	int	flag;
	int	idx;

	idx = 0;
	flag = 1;
	while ((str[idx] >= 9 && str[idx] <= 13) || str[idx] == 32)
		idx++;
	while (str[idx] == 43 || str[idx] == 45)
	{
		if (str[idx] == 45)
			flag *= -1;
		idx++;
	}
	*i_ptr = idx;
	return (flag);
}

int	ft_atoi(const char *str)
{
	char	*n_str
	int		result;
	int		sign;
	int		i;

	n_str = (char *)str;
	result = 0;
	i = 0;
	sign = first(n_str, &i);
	while (n_str[i] >= '0' && n_str[i] <= '9')
	{
		result *= 10;
		result += n_str[i] - 48;
		i++;
	}
	result *= sign;
	return (result);
}
