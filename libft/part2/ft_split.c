/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhyoon <suhyoon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 17:54:35 by suhyoon           #+#    #+#             */
/*   Updated: 2022/03/29 20:07:01 by suhyoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	word_count(char *str, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == c))
			i++;
		if (str[i])
			count++;
		while (str[i] && (str[i] != c))
			i++;
	}
	return (count);
}

int	word_len_cnt(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && (str[i] != c))
		i++;
	return (i);
}

char	*make_word(char *str, char c)
{
	int		word_len;
	int		i;
	char	*word;

	i = 0;
	word_len = word_len_cnt(str, c);
	word = (char *)malloc(sizeof(char) * (word_len + 1));
	while (i < word_len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**new_str;
	int		i;

	i = 0;
	new_str = (char **)malloc(sizeof(char) * (word_count(str, c) + 1));
	while (*str)
	{
		while (*str && (*str == c))
			str++;
		if (*str)
		{
			new_str[i] = make_word(str, c);
			i++;
		}
		while (*str && (*str != c))
			str++;
	}
	new_str[i] = '\0';
	return (new_str);
}
