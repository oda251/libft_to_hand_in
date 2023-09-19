/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _ft_memcmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoda <yoda@studen.42tokyo.jp>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 03:08:26 by yoda              #+#    #+#             */
/*   Updated: 2023/09/20 03:08:26 by yoda             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n - 1)
	{
		if (*((unsigned char)s1 + i) != *((unsigned char)s2 + i))
			break ;
		i++;
	}
	return (*((unsigned char)s1 + i) - *((unsigned char)s1 + i));
}