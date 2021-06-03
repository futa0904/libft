/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrina <yrina@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 21:09:25 by yrina             #+#    #+#             */
/*   Updated: 2021/04/25 23:20:33 by yrina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	size_t				i;
	unsigned char		*t1;
	unsigned const char	*t2;

	t1 = 0;
	t1 = (unsigned char *)s1;
	t2 = (unsigned const char *)s2;
	if (t1 == NULL && t2 == NULL)
		return (NULL);
	i = 0;
	while (n-- != 0)
	{
		t1[i] = t2[i];
		i++;
	}
	return (t1);
}
