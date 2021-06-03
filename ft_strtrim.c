/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrina <yrina@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 00:25:52 by yrina             #+#    #+#             */
/*   Updated: 2021/04/27 22:19:52 by yrina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_check(char const s2, char const *set2)
{
	int	i;

	i = 0;
	while (!(set2[i] == '\0'))
	{
		if (s2 == set2[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p;
	size_t	i;
	size_t	m;
	size_t	s1_strlen;

	if (!s1 || !set)
		return (NULL);
	m = 0;
	i = 0;
	s1_strlen = ft_strlen(s1);
	while (ft_check(s1[i], set) != 0)
		i++;
	if (i == s1_strlen)
		return (ft_strdup(""));
	while (ft_check(s1[s1_strlen-- - 1], set) != 0)
		m++;
	s1_strlen = ft_strlen(s1) - i - m;
	p = (char *)malloc(s1_strlen + 1);
	if (!p)
		return (NULL);
	m = 0;
	while (s1_strlen-- != 0)
		p[m++] = s1[i++];
	p[m] = '\0';
	return (p);
}
