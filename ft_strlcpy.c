/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrina <yrina@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 15:49:39 by yrina             #+#    #+#             */
/*   Updated: 2021/04/25 23:50:05 by yrina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	l;

	l = 0;
	while (l < n && src[l] != 0)
	{
		dest[l] = src[l];
		l++;
	}
	while (l <= n)
	{
		dest[l] = '\0';
		l++;
	}
	return (dest);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	if (!dest || !src)
		return (0);
	i = ft_strlen(src);
	if (i < size)
	{
		ft_strncpy(dest, src, i);
	}
	else if (size != 0)
	{
		ft_strncpy(dest, src, size - 1);
		dest[size - 1] = '\0';
	}
	return (i);
}
