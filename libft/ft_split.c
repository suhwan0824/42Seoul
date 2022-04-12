/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhyoon <suhyoon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 17:54:35 by suhyoon           #+#    #+#             */
/*   Updated: 2022/04/07 21:10:48 by suhyoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	**free_func(char **s)
{
	int	idx;

	if (!s)
		return (0);
	idx = 0;
	while (s[idx])
		free(s[idx++]);
	free(s);
	return (0);
}

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

char	*make_word(char *str, char c)
{
	int		i;
	int		tmp;
	char	*word;

	i = 0;
	while (str[i] && (str[i] != c))
		i++;
	tmp = i;
	word = (char *)malloc(sizeof(char) * (i + 1));
	if (!word)
		return (0);
	i = 0;
	while (i < tmp)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**make_split(char **new_str, char *str, char c)
{
	int	i;

	i = 0;
	while (*str)
	{
		while (*str && (*str == c))
			str++;
		if (*str)
		{
			new_str[i] = make_word(str, c);
			if (!new_str[i])
				return (free_func(new_str));
			i++;
		}
		while (*str && (*str != c))
			str++;
	}
	new_str[i] = 0;
	return (new_str);
}

char	**ft_split(char const *s, char c)
{
	char	**new_str;
	char	*str;
	int		i;

	i = 0;
	if (!s)
		return (0);
	str = (char *)s;
	new_str = (char **)
		malloc(sizeof(char *) * (word_count((char *)str, c) + 1));
	if (!new_str)
		return (0);
	return (make_split(new_str, str, c));
}
