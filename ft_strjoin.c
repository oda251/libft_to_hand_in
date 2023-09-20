/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoda <yoda@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 21:11:08 by yoda              #+#    #+#             */
/*   Updated: 2023/09/20 21:24:16 by yoda             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str);

char	*ft_strjoin(char const *s1, const char *s2)
{
	char			*dest;
	size_t			i;
	const size_t	len1 = ft_strlen(s1);
	const size_t	len2 = ft_strlen(s2);

	dest = malloc(sizeof(char) * (len1 + len2));
	if (!dest)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		dest[i] = s1[len1];
	}
	while (i < len1 + len2)
	{
		dest[i - len1] = s2[i - len1];
	}
	return (dest);
}
