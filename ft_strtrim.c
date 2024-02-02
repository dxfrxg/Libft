/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 21:28:55 by daxferna          #+#    #+#             */
/*   Updated: 2024/02/02 23:55:58 by daxferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p;
	int		i;
	int		j;

	i = 0;
	j = ft_strlen(s1) - 1;
	while (ft_strnstr(set, &s1[i], ft_strlen(set)))
		i++;
	while (ft_strnstr(set, &s1[j], ft_strlen(set)))
		j++;
	if (j < i)
		return (ft_calloc(1, sizeof(char)));
	p = malloc(j-i);
	if (!p)
		return (0);
	return (ft_substr(s1, i + 1, j - i + 1));
}
