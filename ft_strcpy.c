/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrodri <rodrodri@student.hive.fi >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 11:26:52 by rodrodri          #+#    #+#             */
/*   Updated: 2021/11/02 18:31:42 by rodrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	size_t	src_len;

	src_len = ft_strlen(src);
	ft_memcpy(dst, src, src_len);
	ft_bzero(dst + src_len, 1);
	return (dst);
}

/*
**	int	i;
**
**	i = 0;
**	while (src[i])
**	{
**		dst[i] = src[i];
**		i++;
**	}
**	dst[i] = src[i];
**	return (dst);
*/
