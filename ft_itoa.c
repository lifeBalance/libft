/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrodri <rodrodri@student.hive.fi >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 14:41:03 by rodrodri          #+#    #+#             */
/*   Updated: 2021/11/08 16:45:26 by rodrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_getlen(int n);
static char		*ft_strrev(char *str, int len);
static char		*ft_gimme_digits(char *s, int n, int len);

char	*ft_itoa(int n)
{
	char	*a;
	size_t	len;

	len = ft_getlen(n);
	a = ft_strnew(len);
	if (!a)
		return (NULL);
	a = ft_gimme_digits(a, n, len);
	a = ft_strrev(a, len);
	return (a);
}

static size_t	ft_getlen(int n)
{
	size_t	i;

	if (n == -2147483648)
		return (11);
	i = 1;
	if (n < 0)
		i++;
	n /= 10;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static char	*ft_gimme_digits(char *s, int n, int len)
{
	int	i;
	int	sign;

	i = 0;
	if (n == -2147483648)
	{
		s[i++] = 8 + '0';
		n = -214748364;
	}
	sign = n;
	if (sign < 0)
		n = -n;
	while (i < len - (sign < 0))
	{
		s[i] = n % 10 + '0';
		i++;
		n /= 10;
	}
	if (sign < 0)
		s[i] = '-';
	return (s);
}

static char	*ft_strrev(char *s, int n)
{
	int		i;
	int		j;
	char	temp;

	i = 0;
	j = n - 1;
	while (i < n / 2)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		j--;
		i++;
	}
	return (s);
}
