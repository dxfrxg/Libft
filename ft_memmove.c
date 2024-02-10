/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 00:28:55 by daxferna          #+#    #+#             */
/*   Updated: 2024/02/10 23:29:29 by daxferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	i = n;
	if (dst < src)
		return (ft_memcpy(dst, src, n));
	else
	{
		while (i > 0 && (dst != 0 || src != 0))
		{
			d[i - 1] = s[i - 1];
			i++;
		}
		return (dst);
	}
}
