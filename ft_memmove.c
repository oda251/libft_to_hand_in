/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoda <yoda@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 21:36:02 by yoda              #+#    #+#             */
/*   Updated: 2023/09/21 19:57:39 by yoda             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	void	*tmp;

	tmp = calloc(n + 1, sizeof(char));
	if (!tmp)
		return (NULL);
	tmp = ft_memcpy(tmp, src, n);
	i = -1;
	while (++i < n)
		*((unsigned char *) dest + i) = *((unsigned char *) tmp + i);
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