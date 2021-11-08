/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrodri <rodrodri@student.hive.fi >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 14:41:03 by rodrodri          #+#    #+#             */
/*   Updated: 2021/11/07 19:48:28 by rodrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(const char *s, char c);
static size_t	ft_slen(const char *s, char c);
static size_t	ft_skip(const char *s, char c);

char	**ft_strsplit(char const *s, char c)
{
	char	**sarr;
	size_t	len;
	size_t	i;
	size_t	j;

	sarr = (char **)malloc(ft_count_words(s, c) * sizeof(char *) + 1);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
			i += ft_skip(s + i, c);
		else
		{
			len = ft_slen(s + i, c);
			sarr[j] = ft_strsub(s, i, len);
			if (!sarr[j])
				return (NULL);
			i += len;
			j++;
		}
		sarr[j] = 0;
	}
	return (sarr);
}

static size_t	ft_count_words(const char *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			i += ft_skip(s + i, c);
		else
		{
			i += ft_slen(s + i, c);
			count++;
		}
	}
	return (count);
}

static size_t	ft_skip(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] == c)
		i++;
	return (i);
}

static size_t	ft_slen(const char *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}
