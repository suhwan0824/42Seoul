/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhyoon <suhyoon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 17:30:49 by suhyoon           #+#    #+#             */
/*   Updated: 2022/03/17 18:23:37 by suhyoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "libft.h"

int main()
{
	//****************************ft_strlen***********************************
	char str[] = "My name is SuHwan Yoon";
	int len;

	len = ft_strlen(str);
	for (int i = 0; i < len; i++)
	{
		if (ft_isalpha(str[i]))
			printf("ft_strlen(str[%d]) is True", i);
		else
			printf("ft_strlen(str[%d]) is False", i);

		if (isalpha(str[i]))
			printf("strlen(str[%d]) is True", i);
		else
			printf("strlen(str[%d]) is False", i);

		printf("\n");
	}

	//*************************************************************************
}
