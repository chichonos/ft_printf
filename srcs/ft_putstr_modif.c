/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_modif.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mea <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 14:18:08 by mea               #+#    #+#             */
/*   Updated: 2021/11/10 14:38:30 by mea              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes/ft_printf.h"

int	ft_putstr_modif(char *str)
{
	int	i;

	i = 0;
	while (str && str[i])
	{
		write(1, str + i, 1);
		i++;
	}
	if (!str)
		return (ft_putstr_modif("(null)"));
	return (i);
}
