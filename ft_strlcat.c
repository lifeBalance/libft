/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrodri <rodrodri@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 23:42:06 by rodrodri          #+#    #+#             */
/*   Updated: 2021/11/04 23:05:44 by rodrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;

	dstlen = ft_strlen(dst);
	ft_memcpy(dst + dstlen, src, (dstsize - dstlen - 1));
	ft_bzero((dst + dstlen + ft_strlen(src)), 1);
	return (dstlen + ft_strlen(src));
}
