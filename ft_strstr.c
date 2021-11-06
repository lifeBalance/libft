/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrodri <rodrodri@student.hive.fi >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 14:41:03 by rodrodri          #+#    #+#             */
/*   Updated: 2021/11/06 12:31:48 by rodrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char	*substr;
	size_t	i;

	if (ft_strequ(needle, ""))
		return ((char *)haystack);
	substr = ft_strnew(ft_strlen(needle) + 1);
	i = 0;
	while (ft_strlen(haystack + i) >= ft_strlen(needle))
	{
		ft_strncpy(substr, haystack + i, ft_strlen(needle));
		if (ft_strequ(substr, needle))
			break ;
		i++;
	}
	ft_strdel(&substr);
	if (ft_strlen(haystack + i) >= ft_strlen(needle))
		return ((char *)haystack + i);
	return (NULL);
}
