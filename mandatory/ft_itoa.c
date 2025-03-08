/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mourhouc <mourhouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 17:41:33 by mourhouc          #+#    #+#             */
/*   Updated: 2024/11/16 19:16:31 by mourhouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	integer_length(long n)
{
	int	length;

	length = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
		length++;
	}
	while (n > 0)
	{
		length++;
		n /= 10;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	char	*arr;
	int		length;
	long	nb;

	nb = n;
	length = integer_length(nb);
	arr = (char *)malloc(sizeof(char) * (length + 1));
	if (!arr)
		return (NULL);
	arr[length] = '\0';
	if (nb < 0)
	{
		arr[0] = '-';
		nb *= -1;
	}
	if (nb == 0)
		arr[0] = '0';
	while (nb > 0)
	{
		arr[length - 1] = (nb % 10) + 48;
		nb /= 10;
		length--;
	}
	return (arr);
}
