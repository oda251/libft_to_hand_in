/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoda <yoda@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:18:51 by yoda              #+#    #+#             */
/*   Updated: 2023/09/21 16:49:40 by yoda             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_dest(char **dest, long ln)
{
	int		digit;

	digit = 0;
	if (ln < 0)
	{
		ln *= (-1);
		digit++;
	}
	while (ln)
	{
		ln /= 10;
		digit++;
	}
	*dest = malloc(sizeof(char) * digit);
	if (!*dest)
		return (0);
	(*dest)[digit] = '\0';
	if (ln < 0)
	{
		(*dest)[0] = '-';
		digit--;
	}
	return (digit);
}

void	put_nums(char *dest, long ln, int size)
{
	while (--size >= 0)
	{
		dest[size] = ln % 10 + '0';
		ln /= 10;
	}
}

char	*ft_itoa(int n)
{
	char	*dest;
	int		size;

	if (n == 0)
	{
		dest = malloc(sizeof(char) * 2);
		dest[0] = '0';
		dest[1] = '\0';
		return (dest);
	}
	size = get_dest(&dest, (long) n);
	if (!size)
		return (NULL);
	if (n < 0)
		put_nums(dest + 1, (long) n * (-1), size);
	else
		put_nums(dest, (long) n, size);
	return (dest);
}

// int main()
// {
// 	printf("%s\n", ft_itoa(-212414));
// }