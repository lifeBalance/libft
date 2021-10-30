/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrodri <rodrodri@student.hive.fi >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 11:26:52 by rodrodri          #+#    #+#             */
/*   Updated: 2021/10/30 14:21:21 by rodrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*destin;
	unsigned char	*source;
	unsigned char	ch;
	size_t			i;

	destin = (unsigned char *)dst;
	source = (unsigned char *)src;
	ch = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		destin[i] = source[i];
		if (source[i] == c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
