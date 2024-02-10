/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 19:01:41 by daxferna          #+#    #+#             */
/*   Updated: 2024/02/10 20:25:21 by daxferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

static int	ft_countwords(const char *s, char c)
{
	int	i;
	int	words;
	int	slen;

	i = 0;
	words = 0;
	slen = ft_strlen(s);
	if (slen == 0)
		return (0);
	while (s[i])
	{
		if (s[i] == c)
		{
			words++;
			while (s[i] == c)
				i++;
		}
		i++;
	}
	if (s[0] == c && s[slen - 1] == c)
		words--;
	if (s[0] != c && s[slen - 1] != c)
		words++;
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char	**p;
	int		i;
	
	if (ft_countwords(s, c) == 0)
		return (0);
	i = 0;
	p = (char **)malloc(ft_countwords(s, c) * sizeof(char));
	if (!p)
		return(0);
	while (p[i])
	{
		p[i] = (char *)malloc(ft_nextword * sizeof(char));
		i++;
	}
}
