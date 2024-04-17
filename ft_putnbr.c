/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dturella <dturella@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 13:15:09 by dturella          #+#    #+#             */
/*   Updated: 2024/04/11 13:15:09 by dturella         ###   ########.fr       */
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
