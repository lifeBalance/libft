/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrodri <rodrodri@student.hive.fi >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 14:41:03 by rodrodri          #+#    #+#             */
/*   Updated: 2021/11/06 11:09:24 by rodrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	if (ft_strcmp(s1, s2) == 0)
		return (1);
	return (0);
}

/* You dissapoint me, kid...
**{
**	int	i;
**
**	i = 0;
**	while (s1[i])
**	{
**		if (s1[i] != s2[i])
**			return (0);
**		i++;
**	}
**	if (s1[i] == s2[i])
**		return (1);
**	else
**		return (0);
**}
*/
