/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyun <yoyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 16:37:03 by yoyun             #+#    #+#             */
/*   Updated: 2022/03/14 19:44:58 by yoyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_size(int n)
{
	size_t	output;

	output = 0;
	if (n == 0)
		return (1);
	else if (n == -2147483648)
		return (11);
	else
	{
		if (n < 0)
		{
			n *= -1;
			output++;
		}
		while (n > 0)
		{
			n /= 10;
			output++;
		}
		return (output);
	}
}

static void	make_arr(char *output, int n, size_t size)
{
	if (output[size] == '-')
		return ;
	if (n == -2147483648)
	{
		output[size] = '8';
		make_arr(output, 214748364, size - 1);
	}
	else if (n < 0)
		make_arr(output, -n, size);
	else
	{
		output[size] = n % 10 + '0';
		if (size == 0)
			return ;
		make_arr(output, n / 10, size - 1);
	}
	return ;
}

char	*ft_itoa(int n)
{
	size_t	arr_max_size;
	char	*output;

	arr_max_size = get_size(n);
	output = (char *)ft_calloc((arr_max_size + 1), sizeof(char));
	if (!output)
		return (0);
	if (n < 0)
		output[0] = '-';
	if (n == 0)
	{
		output[0] = '0';
		return (output);
	}
	make_arr(output, n, arr_max_size - 1);
	return (output);
}
