/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbartole <fbartole@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 14:49:53 by barto             #+#    #+#             */
/*   Updated: 2024/02/26 14:14:54 by fbartole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <stdint.h>
# include <limits.h>
# include <unistd.h>
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
