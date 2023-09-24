/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoda <yoda@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 21:24:41 by yoda              #+#    #+#             */
/*   Updated: 2023/09/24 03:20:52 by yoda             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static size_t	count_len_trimmed(char const *s1, char const *set)
{
	size_t	len;
	size_t	i;

	i = 0;
	len = 0;
	while (s1[i] && in_set(s1[i], set))
		i++;
	while (s1[i])
	{
		len++;
		i++;
		while (s1[i] && in_set(s1[i], set))
			i++;
	}
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dest;
	size_t	len;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	len = count_len_trimmed(s1, set);
	dest = malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	dest[len] = '\0';
	i = 0;
	len = 0;
	while (s1[i])
	{
		while (s1[i] && in_set(s1[i], set))
			i++;
		dest[len] = s1[i];
		len++;
		i++;
	}
	return (dest);
}

// int main()
// {
// 	printf("%s::\n", ft_strtrim(" \n\t\r    hello \n
// t\r world     \r\t\n\t \r\n", " \n\t\r"));
// }