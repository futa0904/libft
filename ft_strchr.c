/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrina <yrina@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 23:24:02 by yrina             #+#    #+#             */
/*   Updated: 2021/04/25 23:18:47 by yrina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*s1;
	char	c1;

	i = 0;
	s1 = (char *)s;
	c1 = (char)c;
	if (c1 == '\0')
	{
		while (!(s1[i] == '\0'))
			i++;
		return (s1 + i);
	}
	i = 0;
	while (s1[i] != 0)
	{
		if (s1[i] == c1)
			return (s1 + i);
		i++;
	}
	return (NULL);
}
