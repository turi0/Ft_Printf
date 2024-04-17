/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dturella <dturella@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 13:14:42 by dturella          #+#    #+#             */
/*   Updated: 2024/04/11 13:14:42 by dturella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <stdint.h>
# include <limits.h>
# include <io.h>
# include <stdio.h>

int	ft_putstr(const char *str);
int	ft_putnbr(int n);
int	ft_putchar(char c);
int	ft_puthexa(unsigned long long n, char *base);
int	ft_putptr(unsigned long n, const char format);
int	ft_printf_format(char specifire, va_list ap);
int	ft_printf(const char *format, ...);
int	ft_putnbrun(unsigned int n);

#endif
