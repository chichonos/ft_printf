/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mea <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:46:40 by mea               #+#    #+#             */
/*   Updated: 2021/11/15 10:22:51 by mea              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"

int	ft_printf(const char *input, ...);
int	ft_eval_input(va_list *list, char input);
int	ft_putchar_modif(char c);
int	ft_putnbr_modif(int nb);
int	ft_putstr_modif(char *str);
int	ft_putnbr_u_modif(unsigned int nb);
int	ft_hexa_modif(unsigned int nb);
int	ft_hexa_modif_v2(unsigned int nb);
int	ft_hexa_modif_v3(unsigned long nb);

#endif
