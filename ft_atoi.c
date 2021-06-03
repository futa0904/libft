/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrina <yrina@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 02:03:50 by yrina             #+#    #+#             */
/*   Updated: 2021/05/10 16:09:28 by yrina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_minus(const char *str2)
{
	int	i;
	int	minus;

	i = 0;
	minus = 1;
	if (str2[i] == '+' || str2[i] == '-')
	{
		if (str2[i + 1] == '+' || str2[i + 1] == '-')
			return (0);
		if (str2[i] == '-')
			minus = -1;
	}
	return (minus);
}

static	int	ft_zero(size_t x)
{
	int	m;

	m = 1;
	while (x >= 2)
	{
		m = m * 10;
		x--;
	}
	return (m);
}

int	ft_num(const char *str3, size_t num_len)
{
	int	num;
	int	i;

	num = 0;
	i = 0;
	while ('0' <= str3[i] && str3[i] <= '9')
	{
		num = num + (str3[i] - '0') * ft_zero(num_len);
		i++;
		num_len--;
	}
	return (num);
}

int	ft_atoi_help_2(int minus, const char *str, size_t num_len)
{
	char	*longmax;
	char	*longmin;

	longmax = "9223372036854775807";
	longmin = "9223372036854775808";
	if (num_len == 19 && minus != -1 && ft_memcmp(longmax, str, 19) < 0)
		return (-1);
	else if (num_len == 19 && minus == -1 && ft_memcmp(longmin, str, 19) < 0)
		return (0);
	else if (num_len >= 20 && minus != -1)
		return (-1);
	else if (num_len >= 20 && minus == -1)
		return (0);
	else
		return (1);
}

int	ft_atoi(const char *str)
{
	size_t	i;
	int		minus;
	size_t	num_len;

	i = 0;
	minus = 1;
	while (str[i] == 32 || (9 <= str[i] && str[i] <= 13))
		i++;
	if (ft_minus(str + i) == 0)
		return (0);
	minus = ft_minus(str + i);
	if (str[i] == '+' || str[i] == '-')
		i++;
	num_len = 0;
	while ('0' <= str[i + num_len] && str[i + num_len] <= '9')
		num_len++;
	if (num_len >= 19)
	{
		if (ft_atoi_help_2(minus, str + i, num_len) <= 0 && num_len == 19)
			return (ft_atoi_help_2(minus, str + i, num_len));
		if (num_len >= 20)
			return (ft_atoi_help_2(minus, str + i, num_len));
	}
	return (ft_num(str + i, num_len) * minus);
}
