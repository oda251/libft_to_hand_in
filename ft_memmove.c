/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoda <yoda@studen.42tokyo.jp>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 21:36:02 by yoda              #+#    #+#             */
/*   Updated: 2023/09/20 02:31:09 by yoda             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);

void	*ft_memmove(void *dest, const void src, size_t n)
{
	size_t				i;
	unsigned char	*dest;
	const unsigned char	*tmp = ft_memcpy(dest, src, n);

	i = -1;
	while (++i < n)
		*(dest + i) = *(src + i);
	return (dest);
}

// int main()
// {
// 	char str[5];
// 	str[0] = 'a';
// 	str[1] = 'b';
// 	str[2] = 'c';
// 	str[3] = 'd';
// 	str[4] = '\0';
// 	char *str2 = strdup(str);
// 	ft_memset(str, 'a', 11);
// 	memset(str2, 'a', 11);
// 	printf(str);
// 	printf("\n");
// 	printf(str2);
// 	return (0);
// }