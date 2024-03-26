/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbartole <fbartole@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 12:53:28 by barto             #+#    #+#             */
/*   Updated: 2024/02/26 19:35:52 by fbartole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int					count;
	unsigned long int	nb;

	count = 0;
	nb = (unsigned long)n;
	if (n < 0)
	{
		count += ft_putchar('-');
		nb *= -1;
	}
	if (nb == 0)
		return (count + ft_putchar('0'));
	else if (nb >= 10)
		count += ft_putnbr(nb / 10);
	count += ft_putchar((char)(nb % 10 + '0'));
	return (count);
}

int	ft_putnbrun(unsigned int n)
{
	int					count;
	unsigned long int	nb;

	count = 0;
	nb = (unsigned long)n;
	if (nb == 0)
		return (count + ft_putchar('0'));
	else if (nb >= 10)
		count += ft_putnbr(nb / 10);
	count += ft_putchar((char)(nb % 10 + '0'));
	return (count);
}
