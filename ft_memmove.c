/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrodri <rodrodri@student.hive.fi >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 14:41:03 by rodrodri          #+#    #+#             */
/*   Updated: 2021/10/31 16:59:14 by rodrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*destin;
	char	*source;

	destin = (char *)dst;
	source = (char *)src;
	if (source > destin)
		ft_memcpy(destin, source, len);
	else
		while (len--)
			destin[len] = source[len];
	return (dst);
}
