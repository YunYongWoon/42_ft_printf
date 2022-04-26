/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyun <yoyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:16:10 by yoyun             #+#    #+#             */
/*   Updated: 2022/03/14 19:44:45 by yoyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_empty(char c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

static long long	calc_output(long long output, int pm, const char str)
{
	if (pm < 0)
		output = output * 10 - (str - '0');
	else
		output = output * 10 + (str - '0');
	return (output);
}

static int	check_output(long long output, int pm)
{
	if ((pm < 0 && output > 0) || output < -922337203685477580)
		return (-1);
	else if ((pm > 0 && output < 0) || output > 922337203685477580)
		return (1);
	return (0);
}

static long long	make_output(long long output, int pm, const char *str)
{
	while (*str >= '0' && *str <= '9')
	{
		if (check_output(output, pm) == -1)
			return (0);
		else if (check_output(output, pm) == 1)
			return (-1);
		output = calc_output(output, pm, *str);
		str++;
	}
	return (output);
}

int	ft_atoi(const char *str)
{
	long long	output;
	int			pm;

	output = 0;
	pm = 1;
	while (is_empty(*str) && *str)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			pm = -1;
		str++;
	}
	return (make_output(output, pm, str));
}
