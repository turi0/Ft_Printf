/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dturella <dturella@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 13:12:24 by dturella          #+#    #+#             */
/*   Updated: 2024/04/11 13:12:24 by dturella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_format(char specifire, va_list *ap)
{
	int	count;

	count = 0;
	if (specifire == 'c')
		count += ft_putchar(va_arg(*ap, int));
	else if (specifire == 's')
		count += ft_putstr(va_arg(*ap, char *));
	else if (specifire == 'd' || specifire == 'i')
		count += ft_putnbr(va_arg(*ap, int));
	else if (specifire == 'u')
		count += ft_putnbrun(va_arg(*ap, unsigned int));
	else if (specifire == '%')
		count += ft_putchar('%');
	else if (specifire == 'X')
		count += ft_puthexa(va_arg(*ap, unsigned int), "0123456789ABCDEF");
	else if (specifire == 'x')
		count += ft_puthexa(va_arg(*ap, unsigned int), "0123456789abcdef");
	else if (specifire == 'p')
	{
		count += ft_putstr("0x");
		count += ft_putptr(va_arg(*ap, unsigned long), 'x');
	}
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		len;

	len = 0;
	va_start(ap, format);
	if (!format)
		return (0);
	while (*format)
	{
		if (*format == '%')
		{
			len += ft_printf_format(*(++format), &ap);
			format++;
		}
		else
		{
			len += ft_putchar(*format);
			format++;
		}
	}
	va_end(ap);
	return (len);
}
