/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrina <yrina@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 22:51:08 by yrina             #+#    #+#             */
/*   Updated: 2021/04/25 23:24:23 by yrina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_join_help(char *t1, char *p)
{
	int	i;

	i = 0;
	while (!(t1[i] == '\0'))
	{
		p[i] = t1[i];
		i++;
	}
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*t1;
	char	*t2;
	char	*p;

	if (!s1 || !s2)
		return (NULL);
	t1 = (char *)s1;
	t2 = (char *)s2;
	p = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!p)
		return (NULL);
	ft_join_help(t1, p);
	ft_join_help(t2, p + ft_strlen(s1));
	p[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	return (p);
}
