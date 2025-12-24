/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smurayam <smurayam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 14:19:55 by smurayam          #+#    #+#             */
/*   Updated: 2025/03/24 01:42:00 by smurayam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// 16進数。%pのなかで使う気がする

// int	ft_print_hex(unsigned long num)
// {
// 	unsigned long	ul;
// 	int				i;

// 	ul = 0;
// 	i = 0;
// }

// 23dattara
//  23/16 = 1...7
//  126/16 = 7...14
// 7d
// int	main(void)
// {
// 	return (0);
// }
#define HEX_LOWER_BASE "0123456789abcdef"
#define HEX_UPPER_BASE "0123456789ABCDEF"
#define LOWER 1
#define UPPER 0

int	print_hex(unsigned long long num, int is_lower)
{
	char	hex_digit;
	int		reminder;
	int		count;

	count = 0;
	if (num >= 16)
		count += print_hex(num / 16, is_lower);
	reminder = num % 16;
	if (is_lower)
		hex_digit = HEX_LOWER_BASE[reminder];
	else
		hex_digit = HEX_UPPER_BASE[reminder];
	count += write(1, &hex_digit, 1);
	return (count);
}

// int	main(void)
// {
// 	print_hex(42,LOWER);
// 	write(1,"\n",1);
// 	print_hex(42,UPPER);
// 	return (0);
// }