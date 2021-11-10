/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrodri <rodrodri@student.hive.fi >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 11:26:52 by rodrodri          #+#    #+#             */
/*   Updated: 2021/11/10 23:00:59 by rodrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	src_len;

	src_len = ft_strlen(src);
	if (src_len < len)
	{
		ft_strcpy(dst, src);
		ft_bzero(dst + src_len + 1, len - src_len);
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}

/*
**Old ways:
**{
**	char	*ret;
**
**	ret = dst;
**	while (*src && len)
**	{
**		*dst++ = *src++;
**		len--;
**	}
**	while (len--)
**		*dst++ = '\0';
**	return (ret);
**}
*/
