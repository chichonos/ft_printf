/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u_modif.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mea <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 16:24:10 by mea               #+#    #+#             */
/*   Updated: 2021/11/16 16:34:07 by mea              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putnbr_u_modif(unsigned int nb)
{
	int	i;

	i = 0;
	if (nb >= 10)
	{
		i += ft_putnbr_u_modif(nb / 10);
		i += ft_putchar_modif((nb % 10) + '0');
	}
	else
		i += ft_putchar_modif(nb + '0');
	return (i);
}
