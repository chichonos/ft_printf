/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_modif.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mea <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:58:48 by mea               #+#    #+#             */
/*   Updated: 2021/11/15 10:11:49 by mea              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_hexa_modif(unsigned int nb)
{
	char	*str;
	int		ret;

	str = "0123456789abcdef";
	ret = 0;
	if (nb >= 16)
	{
		ret += ft_hexa_modif(nb / 16);
	}	
	ret += ft_putchar_modif(str[nb % 16]);
	return (ret);
}

int	ft_hexa_modif_v2(unsigned int nb)
{
	char	*str;
	int		ret;

	str = "0123456789ABCDEF";
	ret = 0;
	if (nb >= 16)
	{
		ret += ft_hexa_modif_v2(nb / 16);
	}	
	ret += ft_putchar_modif(str[nb % 16]);
	return (ret);
}

int	ft_hexa_modif_v3(unsigned long nb)
{
	char	*str;
	int		ret;

	str = "0123456789abcdef";
	ret = 0;
	if (nb >= 16)
	{
		ret += ft_hexa_modif_v3(nb / 16);
	}	
	ret += ft_putchar_modif(str[nb % 16]);
	return (ret);
}
