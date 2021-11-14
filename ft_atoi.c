/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrodri <rodrodri@student.hive.fi >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 13:35:32 by rodrodri          #+#    #+#             */
/*   Updated: 2021/11/14 20:18:48 by rodrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//static	int	ft_isspace(char ch);

int	ft_atoi(const char *str)
{
	int	n;
	int	i;
	int	sign;

	i = 0;
	while (ft_isspace(str[i]))
		i++;
	sign = 1;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	if (!ft_isdigit(str[i]))
		return (0);
	n = 0;
	while (ft_isdigit(str[i]))
	{
		n = n * 10 + (str[i] - '0');
		i++;
	}
	return (n * sign);
}

//static int	ft_isspace(char ch)
//{
//	if (ch == '\t' || ch == '\n' || ch == '\v' || ch == '\f' || \
//		ch == '\r' || ch == ' ')
//		return (1);
//	return (0);
//}
