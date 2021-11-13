/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrodri <rodrodri@student.hive.fi >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 00:38:52 by rodrodri          #+#    #+#             */
/*   Updated: 2021/11/13 11:10:38 by rodrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char const *c, int fd)
{
	write(fd, c, ft_strlen(c));
}
/*
** Old loopy ways...
**{
**	if (c) // No need for NULL checks!
**		while (*c)
**			ft_putchar_fd(*c++, fd);
**}
*/
