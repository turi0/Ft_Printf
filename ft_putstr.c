/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbartole <fbartole@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 12:49:00 by barto             #+#    #+#             */
/*   Updated: 2024/02/21 15:55:28 by fbartole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(const char *str)
{
	int	count;

	count = 0;
	if (str == NULL)
	{
		count += ft_putstr("(null)");
		return (count);
	}
	while (*(str))
		count += ft_putchar(*str++);
	return (count);
}
