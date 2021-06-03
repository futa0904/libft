/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrina <yrina@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 13:57:15 by yrina             #+#    #+#             */
/*   Updated: 2021/04/28 13:03:44 by yrina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *buf, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	s;

	ptr = 0;
	ptr = (unsigned char *)buf;
	s = (unsigned char)c;
	i = 0;
	while (n-- != 0)
	{
		ptr[i] = s;
		i++;
	}
	return (buf);
}
