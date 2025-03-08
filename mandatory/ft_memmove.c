/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mourhouc <mourhouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 08:08:17 by mourhouc          #+#    #+#             */
/*   Updated: 2024/11/08 19:27:32 by mourhouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d_data;
	unsigned char	*s_data;
	size_t			i;

	i = 0;
	if (dst == src)
		return (dst);
	d_data = (unsigned char *)dst;
	s_data = (unsigned char *)src;
	if (d_data > s_data)
	{
		while (len-- > 0)
		{
			d_data[len] = s_data[len];
		}
	}
	else
	{
		while (i < len)
		{
			d_data[i] = s_data[i];
			i++;
		}
	}
	return (dst);
}
