/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrodri <rodrodri@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 15:59:26 by rodrodri          #+#    #+#             */
/*   Updated: 2021/11/14 22:22:45 by rodrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int i, char c))
{
	char			*m;
	unsigned int	j;

	if (!s)
		return (NULL);
	m = ft_strnew(ft_strlen(s));
	if (!m)
		return (NULL);
	j = 0;
	while (s[j])
	{
		m[j] = f(j, (s[j]));
		j++;
	}
	return (m);
}
