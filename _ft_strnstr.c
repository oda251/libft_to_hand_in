/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _ft_strnstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoda <yoda@studen.42tokyo.jp>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 03:13:25 by yoda              #+#    #+#             */
/*   Updated: 2023/09/20 03:13:25 by yoda             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str);
int	ft_strncmp(const char *s1, const char *s2, size_t n);

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const size_t	h_len = ft_strlen(dest);
	const size_t	n_len = ft_strlen(src);
	size_t			i;
	size_t			j;

	i = -1;
	while (++i < h_len - n_len)
	{
		if (ft_strncmp(haystack + i, needle, n_len) == 0)
			return (haystack + i);
	}
	return (NULL);
}

int main()
{
	char *s1 = "ABCDEFGH";
	char *s2 = "DEF";

	printf("%s\n", ft_strncmp(s1, s2, 6));
	printf("%s\n", strncmp(s1, s2, 6));
}