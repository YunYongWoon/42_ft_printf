/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_change_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyun <yoyun@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 16:23:42 by yoyun             #+#    #+#             */
/*   Updated: 2022/05/18 17:05:15 by yoyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_change_func.h"

static int	pf_check_digit(unsigned long addr)
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

static void	pf_change_hex(unsigned long addr, int digit, char *hex)
{
	if (digit <= 0)
		return ;
	pf_change_hex(addr / 16, digit - 1, hex);
	write(1, &hex[addr % 16], 1);
	return ;
}

int	ft_change_hex(va_list ap, const char *c)
{
	unsigned long	addr;
	int				digit;
	int				ret_val;

	ret_val = 0;
	addr = va_arg(ap, unsigned long);
	if (*c == 'p')
		ret_val += write(1, "0x", 2);
	digit = pf_check_digit(addr);
	if (*c == 'p' || *c == 'x')
		pf_change_hex(addr, digit, "0123456789abcdef");
	else if (*c == 'X')
		pf_change_hex(addr, digit, "0123456789ABCDEF");
	return (ret_val + digit);
}
