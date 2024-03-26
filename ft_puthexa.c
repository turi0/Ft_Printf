/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbartole <fbartole@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:25:49 by fbartole          #+#    #+#             */
/*   Updated: 2024/02/26 19:41:23 by fbartole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(unsigned long long n, char *base)
{
	unsigned int	len;
	unsigned int	base_len;
	char			digit;

	len = 0;
	base_len = 16;
	if (n >= base_len)
		len += ft_puthexa(n / base_len, base);
	digit = base[n % base_len];
	ft_putchar(digit);
	return (len + 1);
}
