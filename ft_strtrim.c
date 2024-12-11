/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mourhouc <mourhouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 21:24:36 by mourhouc          #+#    #+#             */
/*   Updated: 2024/11/12 17:48:26 by mourhouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		trimmed_length;
	char	*trimmed_string;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	i = 0;
	j = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (i < j && ft_strchr(set, s1[j - 1]))
		j--;
	trimmed_length = j - i;
	trimmed_string = (char *)malloc(sizeof(char) * (trimmed_length + 1));
	if (!trimmed_string)
		return (NULL);
	ft_strlcpy(trimmed_string, s1 + i, trimmed_length + 1);
	trimmed_string[trimmed_length] = '\0';
	return (trimmed_string);
}
