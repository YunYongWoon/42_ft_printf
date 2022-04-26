/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyun <yoyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 10:48:09 by yoyun             #+#    #+#             */
/*   Updated: 2022/03/14 19:45:17 by yoyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putnbr(int n, int fd)
{
	char	nbr;

	if (n < 10)
	{
		nbr = '0' + n;
		write(fd, &nbr, 1);
		return ;
	}
	ft_putnbr(n / 10, fd);
	ft_putnbr(n % 10, fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == 0)
		write(fd, "0", 1);
	else if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else if (n < 0)
	{
		write(fd, "-", 1);
		ft_putnbr(-n, fd);
	}
	else
		ft_putnbr(n, fd);
}
