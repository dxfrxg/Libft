/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 21:28:55 by daxferna          #+#    #+#             */
/*   Updated: 2024/03/04 22:53:02 by daxferna         ###   ########.fr       */
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
	while (i < s1len && ft_strchr(set, s1[i]))
		i++;
	while (j >= 0 && ft_strchr(set, s1[j]))
		j--;
	if (j < i)
	{
		p = ft_calloc(1, sizeof(char));
		if (!p)
			return (0);
		return (p);
	}
	p = malloc(j - i + 2);
	if (!p)
		return (0);
	ft_strlcpy(p, s1 + i, j - i + 2);
	return (p);
}
