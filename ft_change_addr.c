/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_change_addr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyun <yoyun@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 16:23:42 by yoyun             #+#    #+#             */
/*   Updated: 2022/05/18 18:08:49 by yoyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_change_func.h"

static int	pf_check_long_digit(unsigned long addr)
{
	int	count;

	count = 0;
	if (addr == 0)
		return (1);
	while (addr != 0)
	{
		addr /= 16;
		count++;
	}
	return (count);
}

static void	pf_change_addr(unsigned long addr, int digit, char *hex)
{
	if (digit <= 0)
		return ;
	pf_change_addr(addr / 16, digit - 1, hex);
	write(1, &hex[addr % 16], 1);
	return ;
}

int	ft_change_addr(va_list ap)
{
	unsigned long	addr;
	int				digit;
	int				ret_val;

	ret_val = 0;
	addr = va_arg(ap, unsigned long);
	ret_val += write(1, "0x", 2);
	digit = pf_check_long_digit(addr);
	pf_change_addr(addr, digit, "0123456789abcdef");
	return (ret_val + digit);
}
