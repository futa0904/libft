/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrina <yrina@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 01:32:46 by yrina             #+#    #+#             */
/*   Updated: 2021/04/27 00:03:56 by yrina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	s_len;
	char	*s1;
	char	c1;

	s1 = (char *)s;
	c1 = (char)c;
	s_len = 0;
	s_len = ft_strlen(s);
	if (c1 == '\0')
		return (s1 + s_len);
	if (s_len == 0)
		return (NULL);
	while (0 < s_len)
	{
		if (s1[s_len - 1] == c1)
			return (s1 + s_len - 1);
		s_len--;
	}
	return (NULL);
}
