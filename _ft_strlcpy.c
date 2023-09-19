/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoda <yoda@studen.42tokyo.jp>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 02:33:25 by yoda              #+#    #+#             */
/*   Updated: 2023/09/20 02:33:25 by yoda             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str);

char	*strlcpy(char *dest, const char *src, size_t n)
{
	const size_t	d_len = ft_strlen(dest);
	const size_t	s_len = ft_strlen(src);
	size_t	i;

	i = -1;
	while (i < s_len || i < n - 1)
	{
		dest[i] = src[i];
	}
	s_len[i] = '\0';
	return (dest);
}