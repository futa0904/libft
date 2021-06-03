/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrina <yrina@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 00:06:01 by yrina             #+#    #+#             */
/*   Updated: 2021/04/25 23:40:18 by yrina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_judge(char *str2, const char *to_find, int lim, int len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (str2[i] != '\0' && lim != 0 && len != 0)
	{
		j = 0;
		while ((str2[i + j] == to_find[j] && str2[i + j] != '\0'))
		{
			if (to_find[j + 1] == '\0')
				return (str2 + i);
			j++;
		}
		i++;
		lim--;
	}
	return (0);
}

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	int		lim;
	char	*str2;

	str2 = (char *)str;
	while (to_find[0] == '\0')
		return (str2);
	lim = len - ft_strlen(to_find) + 1;
	if (ft_judge(str2, to_find, lim, len) != 0)
		return (ft_judge(str2, to_find, lim, len));
	return (0);
}
