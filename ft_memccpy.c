/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrina <yrina@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 22:58:57 by yrina             #+#    #+#             */
/*   Updated: 2021/04/20 17:23:12 by yrina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		*t1;
	unsigned const char	*t2;
	unsigned char		s;

	t1 = 0;
	t1 = (unsigned char *)dest;
	t2 = (unsigned const char *)src;
	s = (unsigned char)c;
	i = 0;
	while (n-- != 0)
	{
		if (t2[i] != s)
			t1[i] = t2[i];
		else
		{
			t1[i] = t2[i];
			return (t1 + i + 1);
		}
		i++;
	}
	return (NULL);
}
