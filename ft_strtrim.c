/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrodri <rodrodri@student.hive.fi >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 14:41:03 by rodrodri          #+#    #+#             */
/*   Updated: 2021/11/13 00:43:38 by rodrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c);

char	*ft_strtrim(char const *s)
{
	size_t	last;
	size_t	first;
	char	*trimmed;

	first = 0;
	while (ft_isspace(s[first]))
		first++;
	last = ft_strlen(s) - 1;
	while (ft_isspace(s[last]) && last >= first)
		last--;
	trimmed = ft_strsub(s, first, last - first + 1);
	if (!trimmed)
		return (NULL);
	return (trimmed);
}

static int	ft_isspace(int c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}
