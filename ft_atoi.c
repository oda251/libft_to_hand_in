/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoda <yoda@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 20:28:13 by yoda              #+#    #+#             */
/*   Updated: 2023/09/21 15:28:33 by yoda             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		sign;
	long	num;
	size_t	i;

	if (!*str || !(*str == '-' || *str == '+' || ft_isdigit(*str)))
		return (0);
	sign = 1;
	i = 0;
	if (*str == '-')
	{
		sign = -1;
		i++;
	}
	else if (*str == '+')
		i++;
	num = 0;
	while (ft_isdigit(*(str + i)))
	{
		num = num * 10 + (*(str + i) - '0');
		i++;
	}
	return (sign * num);
}

// int	main(int c, char **v) {
// 	printf("%d\n", ft_atoi(v[1]));
// 	printf("%d\n", atoi(v[1]));
// }