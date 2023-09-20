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

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	const size_t	s_len = ft_strlen(src);
	size_t			i;

	if (!n)
		return (s_len);
	i = 0;
	while (i < s_len && i < n - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (s_len);
}

// int main()
// {
// 	char s1[10];
// 	char s3[10];
// 	char *s2 = "DEF";

// 	printf("%lu\n", ft_strlcpy(s1, s2, 4));
// 	printf("%lu\n", strlcpy(s3, s2, 4));
// 	printf("%s %s \n", s1, s3);
// }
