/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrina <yrina@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 01:34:53 by yrina             #+#    #+#             */
/*   Updated: 2021/04/20 18:05:05 by yrina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*str;
	size_t	x;

	x = n * size;
	str = malloc(x);
	if (!str)
		return (NULL);
	ft_memset(str, '\0', x);
	return (str);
}
