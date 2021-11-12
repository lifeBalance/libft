/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrodri <rodrodri@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 23:42:06 by rodrodri          #+#    #+#             */
/*   Updated: 2021/11/12 10:25:26 by rodrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	amount;

	dstlen = ft_strlen(dst);
	amount = dstsize - dstlen - 1;
	if (ft_strlen(src) < amount)
		amount = ft_strlen(src);
	ft_memcpy(dst + dstlen, src, amount);
	if (dstsize > 0 && dstlen < dstsize)
		ft_bzero((dst + dstlen + amount), 1);
	return (dstlen + ft_strlen(src));
}
