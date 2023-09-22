/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoda <yoda@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 21:11:08 by yoda              #+#    #+#             */
/*   Updated: 2023/09/22 22:08:34 by yoda             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, const char *s2)
{
	char			*dest;
	size_t			i;
	const size_t	len1 = ft_strlen(s1);
	const size_t	len2 = ft_strlen(s2);

	dest = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!dest)
		return (NULL);
	dest[len1 + len2] = '\0';
	i = 0;
	while (i < len1)
	{
		dest[i] = s1[i];
		i++;
	}
	while (i < len1 + len2)
	{
		dest[i] = s2[i - len1];
		i++;
	}
	return (dest);
}

// int main()
// {
// 	char *str = ft_strjoin("11", "22");
// 	printf("%d\n", str[0]);
// 	printf("%d\n", str[1]);
// 	printf("%c\n", str[2]);
// 	printf("%c\n", str[3]);
// }