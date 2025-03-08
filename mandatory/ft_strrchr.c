/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mourhouc <mourhouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 12:52:39 by mourhouc          #+#    #+#             */
/*   Updated: 2024/11/08 19:31:57 by mourhouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	target;
	char	*res;
	int		i;

	target = (char )c;
	res = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == target)
			res = (char *) &s[i];
		i++;
	}
	if (s[i] == target)
		res = (char *) &s[i];
	return (res);
}
