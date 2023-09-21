/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoda <yoda@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 20:36:40 by yoda              #+#    #+#             */
/*   Updated: 2023/09/21 15:28:46 by yoda             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	const size_t	sum = count * size;
	void			*dest;

	if (!sum)
		return (NULL);
	dest = malloc(sum);
	if (!dest)
		return (NULL);
	ft_bzero(dest, sum);
	return (dest);
}
