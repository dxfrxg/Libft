/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 19:01:24 by daxferna          #+#    #+#             */
/*   Updated: 2024/03/04 23:25:15 by daxferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_print(int num, int fd)
{
	int		i;
	char	p;
	char	n[10];

	i = 0;
	while (num > 0)
	{
		n[i++] = '0' + num % 10;
		num /= 10;
	}
	while (i > 0)
	{
		i--;
		p = n[i--];
		ft_putchar_fd(p, fd);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	int	num;

	num = n;
	if (num == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else
	{
		if (num < 0)
		{
			num = -num;
			ft_putchar_fd('-', fd);
		}
		if (num == 0)
			ft_putchar_fd('0', fd);
		else
			ft_print(num, fd);
	}
}
