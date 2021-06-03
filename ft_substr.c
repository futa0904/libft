/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrina <yrina@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 01:34:15 by yrina             #+#    #+#             */
/*   Updated: 2021/04/26 16:12:44 by yrina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s2;
	size_t	m;
	size_t	slen;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (slen <= start)
		slen = 0;
	else if (slen > start && slen - start < len)
		slen = slen - start;
	else
		slen = len;
	s2 = (char *)malloc(sizeof(char) * slen + 1);
	if (!s2)
		return (NULL);
	m = 0;
	while (slen > 0 && s[start + m] != '\0')
	{
		s2[m] = s[start + m];
		m++;
		slen--;
	}
	s2[m] = '\0';
	return (s2);
}
