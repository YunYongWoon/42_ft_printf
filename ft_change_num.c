/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_change_num.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyun <yoyun@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 15:24:39 by yoyun             #+#    #+#             */
/*   Updated: 2022/05/18 17:05:27 by yoyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_change_func.h"

static void	pf_print_num(int num)
{
	char	c;

	c = '0';
	if (num < 0)
	{
		write(1, "-", 1);
		num *= -1;
	}
	if (num == 0)
		return ;
	pf_print_num(num / 10);
	c += num % 10;
	write(1, &c, 1);
}

static int	pf_check_num(int num)
{
	int	digit;

	digit = 0;
	if (num < 0)
	{
		num *= -1;
		digit++;
	}
	while (num)
	{
		num /= 10;
		digit++;
	}
	return (digit);
}

int	ft_change_num(va_list ap)
{
	int	n;

	n = va_arg(ap, int);
	if (n == -2147483648)
		return (write(1, "-2147483648", 11));
	else if (n == 0)
		return (write(1, "0", 1));
	else
	{
		pf_print_num(n);
		return (pf_check_num(n));
	}
}
