/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smurayam <smurayam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 21:21:08 by smurayam          #+#    #+#             */
/*   Updated: 2025/12/26 20:59:31 by smurayam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
int		ft_printf_char(int c);
int		ft_printf_str(char *str);

int		ft_printf_ptr(void *ptr);
ssize_t	ft_print_decimal(int n);
int		ft_printf_unsigned(unsigned int ui);
int		print_hex(unsigned int num, int is_lower);
int		ft_printf_percent(void);
#endif

// makefiledamerasii
