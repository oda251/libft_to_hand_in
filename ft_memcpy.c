/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoda <yoda@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 22:16:47 by yoda              #+#    #+#             */
/*   Updated: 2023/09/19 22:52:52 by yoda             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t	i;

	i = -1;
	while (++i < n)
	{
		*((unsigned char *)dst + i) = *((unsigned char *)src + i);
	}
	return (dst);
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
// 	ft_memcpy(str, "zxcaaa", 5);
// 	memcpy(str2, "zxcaaa", 5);
// 	printf(str);
// 	printf("\n");
// 	printf(str2);
// 	return (0);
// }