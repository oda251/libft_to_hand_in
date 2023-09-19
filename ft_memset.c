/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoda <yoda@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 21:36:02 by yoda              #+#    #+#             */
/*   Updated: 2023/09/19 22:40:14 by yoda             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int ch, size_t n)
{
	size_t			i;
	unsigned char	*dest;

	dest = (unsigned char *) s;
	i = -1;
	while (++i < n)
		*(dest + i) = (unsigned char) ch;
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