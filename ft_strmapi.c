/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrina <yrina@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 16:07:00 by yrina             #+#    #+#             */
/*   Updated: 2021/04/25 23:25:13 by yrina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	s_len;
	char	*p;
	size_t	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	s_len = ft_strlen(s);
	p = (char *)malloc(s_len + 1);
	if (!p)
		return (NULL);
	while (s_len != 0)
	{
		p[i] = f(i, s[i]);
		i++;
		s_len--;
	}
	p[i] = '\0';
	return (p);
}
