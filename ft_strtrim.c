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
	int		s1len;

	s1len = ft_strlen(s1);
	i = 0;
	j = s1len - 1;
	while (i < s1len && ft_strnstr(set, &s1[i], ft_strlen(set)) != 0)
		i++;
	while (j > 0 && ft_strnstr(set, &s1[j], ft_strlen(set)) != 0)
		j--;
	if (j < i)
	{
		p = ft_calloc(1, sizeof(char));
		if (!p)
			return (NULL);
		return (p);
	}
	p = malloc(j - i + 2);
	if (!p)
		return (0);
	ft_strlcpy(p, s1 + i, j - i + 2);
	return (p);
}
