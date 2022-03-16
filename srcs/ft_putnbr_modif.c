/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_modif.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mea <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:22:52 by mea               #+#    #+#             */
/*   Updated: 2021/11/16 16:34:27 by mea              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putnbr_modif(int nb)
{
	int	ret;

	ret = 0;
	if (nb == -2147483648)
		return (write (1, "-2147483648", 11));
	if (nb < 0)
	{
		nb = -nb;
		ret += ft_putchar_modif('-');
	}
	if (nb >= 10)
	{
		ret += ft_putnbr_modif(nb / 10);
		ret += ft_putnbr_modif(nb % 10);
	}
	else
	{
		ret += ft_putchar_modif(nb + '0');
		return (ret);
	}
	return (ret);
}
