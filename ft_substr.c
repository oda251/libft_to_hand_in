/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoda <yoda@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 21:02:37 by yoda              #+#    #+#             */
/*   Updated: 2023/09/21 17:07:05 by yoda             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*dest;
	size_t			size;
	const size_t	s_len = ft_strlen(s);

	if (start >= s_len)
		return (NULL);
	size = 0;
	while (s[size + start])
	{
		size++;
		if (size == len)
			break ;
	}
	dest = malloc(sizeof(char) * size);
	if (!dest)
		return (NULL);
	ft_strlcpy(dest, s + start, size + 1);
	return (dest);
}

// int main ()
// {
// 	printf("%s\n", ft_substr("abcdefgeh", 2, 3));
// }