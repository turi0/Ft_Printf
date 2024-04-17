/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dturella <dturella@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 13:14:53 by dturella          #+#    #+#             */
/*   Updated: 2024/04/11 13:14:53 by dturella         ###   ########.fr       */
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
