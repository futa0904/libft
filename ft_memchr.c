/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrina <yrina@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 13:19:15 by yrina             #+#    #+#             */
/*   Updated: 2021/04/25 23:10:04 by yrina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *buf, int ch, size_t n)
{
	size_t			i;
	unsigned char	*t1;
	unsigned char	t2;

	t1 = 0;
	i = 0;
	t1 = (unsigned char *)buf;
	t2 = (unsigned char)ch;
	while (n-- != 0)
	{
		if (t1[i] == t2)
			return (t1 + i);
		i++;
	}
	return (NULL);
}
