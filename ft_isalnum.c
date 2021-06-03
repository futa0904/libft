/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrina <yrina@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 23:50:36 by yrina             #+#    #+#             */
/*   Updated: 2021/04/20 22:10:25 by yrina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((97 <= c && c <= 122) || (65 <= c && c <= 90) || (48 <= c && c <= 57))
		return (1);
	else
		return (0);
}