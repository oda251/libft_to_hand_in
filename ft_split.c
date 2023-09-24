/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoda <yoda@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:45:00 by yoda              #+#    #+#             */
/*   Updated: 2023/09/24 22:06:57 by yoda             ###   ########.fr       */
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

static char	**free_all(char ***dest)
{
	size_t	i;

	i = 0;
	while ((*dest)[i] != NULL)
	{
		free((*dest)[i]);
		i++;
	}
	free(*dest);
	return (NULL);
}

static int	initialize_split(char ***dest, char const *s, char c)
{
	size_t	size;

	if (!s)
	{
		(*dest) = NULL;
		return (0);
	}
	size = words_count(s, c);
	if (!*s)
	{
		(*dest) = ft_calloc(2, sizeof(char *));
		if (!*dest)
			return (0);
		(*dest)[1] = NULL;
		return (0);
	}
	*dest = malloc(sizeof(char *) * (size + 1));
	if (!*dest)
		return (0);
	(*dest)[size] = NULL;
	return (1);
}

static int	put_part(char **dest, char const *s, long start, size_t n)
{
	if (start == -1)
		return (1);
	*dest = ft_substr(s, start, n);
	if (!*dest)
		return (0);
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**dest;
	long	start;
	size_t	i;
	size_t	index;

	if (!initialize_split(&dest, s, c))
		return (dest);
	i = 0;
	start = -1;
	index = 0;
	while (s[i])
	{
		if (start >= 0 && s[i] == c)
		{
			if (!put_part(&(dest[index++]), s, start, i - start))
				return (free_all(&dest));
			start = -1;
		}
		else if (start == -1 && s[i] != c)
			start = i;
		i++;
	}
	if (!put_part(&(dest[index]), s, start, i - start))
		return (free_all(&dest));
	return (dest);
}

int main ()
{
	
}