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

static size_t	count_len_trimmed(char const *s1, char const *set)
{
	size_t				len;
	size_t				i;
	const size_t	len_set = ft_strlen(set);

	i = 0;
	len = 0;
	while (s1[i])
	{
		while (s1[i] && ft_strncmp(s1 + i, set, len_set) == 0)
			i += len_set;
		if (s1[i])
		{
			len++;
			i++;
		}
	}
	return (len);
}

static char	*solve(char *dest, char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	const size_t	len_set = ft_strlen(set);

	i = 0;
	j = 0;
	while (s1[i])
	{
		while (s1[i] && ft_strncmp(s1 + i, set, len_set) == 0)
			i += len_set;
		if (s1[i])
		{
			dest[j] = s1[i];
			j++;
			i++;
		}
	}
	return (dest);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dest;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	if (!*set)
		return (ft_strdup(s1));
	len = count_len_trimmed(s1, set);
	dest = malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	dest[len] = '\0';
	dest = solve(dest, s1, set);
	return (dest);
}
