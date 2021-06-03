/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrina <yrina@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 15:13:55 by yrina             #+#    #+#             */
/*   Updated: 2021/05/01 12:39:41 by yrina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_check_digit(long n)
{
	int	digit;

	digit = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = n * -1;
		digit++;
	}
	while (n > 0)
	{
		n = n / 10;
		digit++;
	}
	return (digit);
}

static	int	ft_zero(int x)
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

static	char	ft_itoa_num(long n, int digit)
{
	char	a;

	a = (n / ft_zero(digit)) + '0';
	return (a);
}

void	ft_itoa_help(long new, char *p)
{
	int		digit;
	size_t	i;

	i = 0;
	digit = 0;
	digit = ft_check_digit(new);
	while (digit != 0)
	{
		p[i] = ft_itoa_num(new, digit);
		new = new - ((ft_itoa_num(new, digit) - '0') * ft_zero(digit));
		i++;
		digit--;
	}
	p[i] = '\0';
}

char	*ft_itoa(int n)
{
	char	*p;
	size_t	i;
	long	new;

	new = (long)n;
	i = 0;
	p = (char *)malloc(sizeof(char) * ft_check_digit(new) + 1);
	if (!p)
		return (NULL);
	if (new == 0)
	{
		*p = "02";
		// p[0] = '0';
		// p[1] = '\0';
	}
	if (new < 0)
	{
		new = new * -1;
		p[i] = '-';
		i++;
	}
	if (new > 0)
		ft_itoa_help(new, p + i);
	return (p);
}
