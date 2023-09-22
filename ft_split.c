/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoda <yoda@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:45:00 by yoda              #+#    #+#             */
/*   Updated: 2023/09/22 22:57:41 by yoda             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	words_count(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	if (*s != c)
		count++;
	i = 0;
	while (s[i + 1])
	{
		if (s[i] == c && s[i + 1] != c)
			count++;
		i++;
	}
	return (count);
}

static void	free_all(char ***dest)
{
	size_t	i;

	i = 0;
	while ((*dest)[i] != NULL)
	{
		free((*dest)[i]);
		i++;
	}
}

static int	initialize_split(char ***dest, char const *s, char c)
{
	const size_t	size = words_count(s, c);

	*dest = malloc(sizeof(char *) * (size + 1));
	if (!*dest)
		return (0);
	(*dest)[size] = NULL;
	return (1);
}

static int	put_part(char **dest, char const *s, size_t start, size_t i)
{
	static size_t	index = 0;

	printf("%d %d\n", start, i);
	dest[index] = ft_substr(s, start, i - start);
	if (!dest[index])
	{
		free_all(&dest);
		return (0);
	}
	index++;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**dest;
	size_t	start;
	size_t	i;

	if (!*s || !initialize_split(&dest, s, c))
		return (NULL);
	i = 0;
	start = 0;
	while (s[i] || start)
	{
		if (!s[i] || (start && s[i] == c))
		{
			if (!put_part(dest, s, start, i))
				return (NULL);
			if (!s[i])
				break ;
			start = 0;
		}
		else if (!start && s[i] != c)
			start = i;
		i++;
	}
	return (dest);
}

int main(int c, char **v)
{
	char **dest = ft_split(v[1], 0);
	for (int i=0; dest[i] != NULL; i++)
	{
		printf("%s::\n", dest[i]);
	}
}