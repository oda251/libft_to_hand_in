/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _ft_strlcat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoda <yoda@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 20:11:53 by yoda              #+#    #+#             */
/*   Updated: 2023/09/20 20:11:53 by yoda             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str);

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	const size_t	d_len = ft_strlen(dst);
	const size_t	s_len = ft_strlen(src);
	size_t			i;

	if (dstsize <= d_len)
		return (dstsize + s_len);
	i = d_len;
	while (i < dstsize || i < s_len)
	{
		dst[i] = src[i - d_len];
	}
	return (d_len + s_len);
}
