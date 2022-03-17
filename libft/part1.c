/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   part1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhyoon <suhyoon@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 17:06:55 by suhyoon           #+#    #+#             */
/*   Updated: 2022/03/17 16:59:49 by suhyoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isalnum(c))
		return (1);
	return (0);
}

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 255)
		return (1);
	return (0);
}

int	ft_isprint(int c)
{
	if (c >= 40 && c <= 176)
		return (1);
	return (0);
}

void	*ft_memset(void *ptr, int val, size_t len)
{
	size_t			i;
	unsigned char	*tmp;

	i = 0;
	tmp = (unsigned char*)ptr;

	while (i < len)
	{
		tmp[i] = (unsigned char)val;
		i++;
	}
	return (tmp);
}

void	ft_bzero(void *ptr, size_t len)
{
	size_t			i;
	unsigned char	*tmp;

	i = 0;
	tmp = (unsigned char*)ptr;

	while (i < len)
	{
		tmp[i] = 0;
		i++;
	}
}

void	*ft_memcpy(void dst, const void src, size_t n)
{
	size_t			i;
	char			tmp_dst;
	const char		tmp_src;

	i = 0;
	while (i < n)
	{
		tmp_dst[i] = tmp_src[i];
		i++;
	}
	return (dst);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		t_dst;
	const unsigned char	t_src;

	t_dst = (unsigned char*)dst;
	t_src = (const unsigned char*)src;

	if (t_dst == NULL && t_src == NULL)
		return (NULL);
	if (dest < src)
	{
		i = 0;
		while (i < len)
		{
			t_dst[i] = t_src[i];
			i++;
		}
	}
	else
	{
		i = len;
		while (i)
		{
			t_dst[i] = t_src[i];
			i--;
		}
	}
	return (dst);
}

size_t	strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (i + 1 < dstsize && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	d_len;
	unsigned int	s_len;

	i = 0;
	j = 0;
	d_len = ft_strlen(dest);
	j = d_len;
	s_len = ft_strlen(src);
	if (size <= d_len)
		return (s_len + size);
	while (src[i] != '\0' && i + 1 + d_len < dstsize)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (d_len + s_len);
}

int	ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
    {
	c = c - 'a' + 'A';
    }
    return (c);
}

int	ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
    {
	c = c - 'A' + 'a';
    }
    return (c);
}

char	*strchr(const char *s, int c)
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

char	*ft_strrchr(const char *s, int c)
{
    int		i;
    char	t_c;
    char	*t_s;

    i = 0;
    t_c = (char)c;
    t_s = (char*)s;
    while (t_s[i] != '\0')
	i++;

    i -= 1;
    while (i >= 0)
    {
	if (t_s[i] == t_c)
	    return (&t_s[i]);
	i--;
    }
    return (0);
}

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

void	*ft_memchr(const void *s, int c, size_t n)
{
    size_t	i;
    unsigned char	n_c;
    unsigned char	*ptr;

    i = 0;
    n_c = (unsigned char)c;
    ptr = (unsigned char*)s;
    while (i < n)
    {
	if (ptr[i] == n_c)
	    return ((void *)ptr + i);
	i++;
    }
    return ((void *)0);
}

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t		i;
    unsigned char	*tmp1;
    unsigned char	*tmp2;

    i = 0;
    tmp1 = (unsigned char*)s1;
    tmp2 = (unsigned char*)s2;
    while (i < n)
    {
	if (tmp1[i] != tmp2[i])
	    return (tmp1[i] - tmp2[i]);
	i++;
    }
    return (0);
}

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

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	void	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (0);
	ft_bzero(ptr, (count * size));
	return (ptr);
}

char	*strdup(const char *src)
{
	char	*dest;
	int		i;

	i = 0;
	dest = (char *)malloc(sizeof(char) * ft_strlen(src));
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	if (!dest)
		return (0);
	return (dest);
}
