/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoda <yoda@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 22:16:47 by yoda              #+#    #+#             */
/*   Updated: 2023/09/19 22:28:47 by yoda             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, t_size n)
{
	t_size	i;

	i = -1;
	while (++i < n)
	{
		*((unsigned char *)dst + i) = *((unsigned char *)src + i);
	}
	return (dst);
}
