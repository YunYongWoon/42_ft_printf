/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_change_func.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyun <yoyun@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 15:58:31 by yoyun             #+#    #+#             */
/*   Updated: 2022/05/18 17:02:26 by yoyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CHANGE_FUNC_H
# define FT_CHANGE_FUNC_H

# include <stdarg.h>
# include <unistd.h>

int	ft_change_character(va_list ap);
int	ft_change_string(va_list ap);
int	ft_change_hex(va_list ap, const char *c);
int	ft_change_num(va_list ap);
int	ft_change_unsigned_num(va_list ap);

#endif
