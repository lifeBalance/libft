/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrodri <rodrodri@student.hive.fi >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 00:38:52 by rodrodri          #+#    #+#             */
/*   Updated: 2021/11/12 22:22:12 by rodrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	char	*snl;

	snl = ft_strnew(ft_strlen(s) + 1);
	ft_strcpy(snl, s);
	ft_strcat(snl, "\n");
	ft_putstr_fd(snl, fd);
	ft_strdel(&snl);
}
