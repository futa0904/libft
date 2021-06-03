/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrina <yrina@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 17:45:05 by yrina             #+#    #+#             */
/*   Updated: 2021/04/30 17:32:57 by yrina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_check_digit(long n)
{
	int	digit;

	digit = 0;
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

void	ft_putnbr_fd(int n, int fd)
{
	int		digit;
	long	new;

	new = (long)n;
	if (new == 0)
		ft_putchar_fd('0', fd);
	if (new < 0)
	{
		new = new * -1;
		ft_putchar_fd('-', fd);
	}
	if (new > 0)
	{
		digit = ft_check_digit(new);
		while (digit != 0)
		{
			ft_putchar_fd(ft_itoa_num(new, digit), fd);
			new = new - ((ft_itoa_num(new, digit) - '0') * ft_zero(digit));
			digit--;
		}
	}
}
