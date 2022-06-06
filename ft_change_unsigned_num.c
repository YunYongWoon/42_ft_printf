/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_change_unsigned_num.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyun <yoyun@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 16:59:14 by yoyun             #+#    #+#             */
/*   Updated: 2022/06/06 16:54:12 by yoyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_change_func.h"

static void	pf_print_num(unsigned int num)
{
	char	c;

	c = '0';
	if (num == 0)
		return ;
	pf_print_num(num / 10);
	c += num % 10;
	write(1, &c, 1);
}

static int	pf_check_num(unsigned int num)
{
	int	digit;

	digit = 0;
	while (num)
	{
		num /= 10;
		digit++;
	}
	return (digit);
}

int	ft_change_unsigned_num(va_list ap)
{
	unsigned int	n;

	n = va_arg(ap, unsigned int);
	if (n == 0)
		return (write(1, "0", 1));
	pf_print_num(n);
	return (pf_check_num(n));
}
