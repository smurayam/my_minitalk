/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnnya <nnnya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 20:30:42 by smurayam          #+#    #+#             */
/*   Updated: 2025/12/07 18:58:55 by nnnya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

#define UPPER 0
#define LOWER 1

int	format_identifier(const char *format, va_list args)
{
	int	count;

	count = 0;
	if (*format == 'c')
		count += ft_printf_char(va_arg(args, int));
	if (*format == 's')
		count += ft_printf_str(va_arg(args, char *));
	if (*format == 'p')
		count += ft_printf_ptr(va_arg(args, void *));
	if (*format == 'd' || *format == 'i')
		count += ft_print_decimal(va_arg(args, int));
	if (*format == 'u')
		count += ft_printf_unsigned(va_arg(args, unsigned int));
	if (*format == 'x')
		count += print_hex(va_arg(args, unsigned int), LOWER);
	if (*format == 'X')
		count += print_hex(va_arg(args, unsigned int), UPPER);
	if (*format == '%')
		count += ft_printf_percent();
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	count = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			count += format_identifier(format, args);
		}
		else
			count += write(1, format, 1);
		format++;
	}
	va_end(args);
	return (count);
}

// ifで他の型ぜんぶいれる
// int	main(void)
// {
// 	printf("%s%p\n%x\n%X\n\n", "wa", NULL, 200, 200);
// 	ft_printf("%s%p\n%x\n%X\n", "wa", NULL, 200, 200);
// 	return (0);
// }
