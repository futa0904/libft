/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrina <yrina@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 01:10:54 by yrina             #+#    #+#             */
/*   Updated: 2021/04/28 12:37:48 by yrina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	unsigned char		*t1;
	unsigned const char	*t2;
	size_t				i;

	if (!s1 && !s2)
		return (s1);
	t1 = 0;
	i = 0;
	t1 = (unsigned char *)s1;
	t2 = (unsigned const char *)s2;
	if (t1 > t2)
	{
		while (n-- > 0)
			t1[n] = t2[n];
	}
	else
	{
		while (n-- > 0)
		{
			t1[i] = t2[i];
			i++;
		}
	}
	return (s1);
}
