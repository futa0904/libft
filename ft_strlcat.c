/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrina <yrina@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 16:34:18 by yrina             #+#    #+#             */
/*   Updated: 2021/04/30 18:34:20 by yrina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat (char *string1, const char *string2, size_t size)
{
	size_t	st1_len;
	size_t	st2_len;
	size_t	i;

	st1_len = ft_strlen (string1);
	st2_len = ft_strlen (string2);
	if (size <= st1_len)
		return (st2_len + size);
	i = 0;
	while (i < size - st1_len - 1 && string2[i] != '\0')
	{
		string1[st1_len + i] = string2[i];
		i++;
	}
	string1[st1_len + i] = '\0';
	return (st1_len + st2_len);
}
