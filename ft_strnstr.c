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

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const size_t	h_len = ft_strlen(haystack);
	const size_t	n_len = ft_strlen(needle);
	size_t			i;

	if (!len)
		return (NULL);
	if (!*needle)
		return ((char *)haystack + ft_strlen(haystack));
	if (h_len < n_len || len < n_len)
		return (NULL);
	i = 0;
	while (i < h_len - n_len + 1 && i < len - n_len + 1)
	{
		if (ft_strncmp(haystack + i, needle, n_len) == 0)
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}

// #include <string.h>
// int main()
// {
// 	char *s1 = "ABCDEFGH";
// 	char *s2 = "DEF";

// 	printf("%s\n", ft_strnstr(s1, s2, 6));
// 	printf("%s\n", strnstr(s1, s2, 6));
// }