/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrina <yrina@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 15:19:19 by yrina             #+#    #+#             */
/*   Updated: 2021/04/25 23:22:31 by yrina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_c_check(char const *s, char c)
{
	size_t	i;
	int		c_check;

	i = 0;
	c_check = 0;
	while (s[i] != '\0')
	{
		if ((s[i] != c && s[i + 1] == c) || (s[i] != c && s[i + 1] == '\0'))
			c_check++;
		i++;
	}
	return (c_check);
}

int	ft_array2_count(char const *s, char c, size_t i)
{
	int	array2;

	array2 = 0;
	while (s[i] == c)
		i++;
	while (s[i + array2] != c && s[i + array2] != '\0')
		array2++;
	return (array2);
}

int	ft_i(char const *s, char c, size_t i)
{
	while (s[i] == c)
		i++;
	return (i);
}

char	**ft_p_put(char **p, char const *s, char c)
{
	int		array1;
	int		array2;
	size_t	i;

	i = 0;
	array1 = 0;
	while (array1 < ft_c_check(s, c))
	{
		array2 = ft_array2_count(s, c, i);
		p[array1] = (char *)malloc(sizeof(char) * array2 + 1);
		if (!p[array1])
			return (NULL);
		array2 = 0;
		i = ft_i(s, c, i);
		while (s[i] != c && s[i] != '\0')
		{
			p[array1][array2] = s[i];
			i++;
			array2++;
		}
		p[array1][array2] = '\0';
		i++;
		array1++;
	}
	return (p);
}

char	**ft_split(char const *s, char c)
{
	char	**p;
	char	**result;
	int		c_check;
	size_t	i;

	if (!s)
		return (NULL);
	c_check = ft_c_check(s, c);
	p = (char **)malloc(sizeof(char *) * c_check + 1);
	if (!p)
		return (NULL);
	result = ft_p_put(p, s, c);
	i = 0;
	if (result == 0)
	{
		while (p[i] != 0)
		{
			free(p[i]);
			i++;
		}
		free(p);
		return (NULL);
	}
	result[c_check] = 0;
	return (result);
}
