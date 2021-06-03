/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrina <yrina@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 14:51:45 by yrina             #+#    #+#             */
/*   Updated: 2021/04/30 17:45:25 by yrina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *buf1, const void *buf2, size_t n)
{
	size_t			i;
	int				ret;
	unsigned char	*t1;
	unsigned char	*t2;

	t1 = 0;
	i = 0;
	t1 = (unsigned char *)buf1;
	t2 = (unsigned char *)buf2;
	if (n == 0)
		return (0);
	while (t1[i] == t2[i])
	{
		if (n == 1)
		{
			return (0);
		}
		n--;
		i++;
	}
	ret = t1[i] - t2[i];
	return (ret);
}
