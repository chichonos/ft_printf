/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mea <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:47:47 by mea               #+#    #+#             */
/*   Updated: 2021/11/15 10:17:59 by mea              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_eval_input(va_list *list, char input)
{
	char	perc;

	perc = '%';
	if (input == 'c')
		return (ft_putchar_modif(va_arg(*list, int)));
	else if (input == 's')
		return (ft_putstr_modif(va_arg(*list, char *)));
	else if (input == 'd' || input == 'i')
		return (ft_putnbr_modif(va_arg(*list, int)));
	else if (input == 'p')
		return (write(1, "0x", 2)
			+ ft_hexa_modif_v3(va_arg(*list, unsigned long)));
	else if (input == 'u')
		return (ft_putnbr_u_modif(va_arg(*list, unsigned int)));
	else if (input == 'x')
		return (ft_hexa_modif(va_arg(*list, unsigned int)));
	else if (input == 'X')
		return (ft_hexa_modif_v2(va_arg(*list, unsigned int)));
	else if (input == '%')
		return (write(1, &perc, 1));
	else
		return (1);
}

int	ft_printf(const char *input, ...)
{
	va_list	list;
	int		pos;
	int		ret;

	va_start(list, input);
	pos = 0;
	ret = 0;
	while (input[pos])
	{
		if (input[pos] == '%')
		{
			ret = ret + ft_eval_input(&list, input[++pos]);
			pos++;
		}
		else
		{
			ret += write(1, &input[pos], 1);
			pos++;
		}
	}
	va_end(list);
	return (ret);
}
