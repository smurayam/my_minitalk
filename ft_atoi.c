/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnnya <nnnya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 14:38:45 by smurayam          #+#    #+#             */
/*   Updated: 2025/09/26 02:14:27 by nnnya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s);

int	ft_atoi(const char *nptr)
{
	int	result;
	int	i;

	result = 0;
	i = 0;
	while (*nptr && (*nptr == ' ' || *nptr == '\f' || *nptr == '\n'
			|| *nptr == '\r' || *nptr == '\t' || *nptr == '\v'))
		nptr++;
	while (nptr[i] && ('0' <= nptr[i] && nptr[i] <= '9'))
	{
		result = ((char)nptr[i] - '0') + result * 10;
		i++;
	}
	return (result);
}

// int	main(void)
// {
// 	const char	nptr[] = "10";

// 	printf("%d\n", ft_atoi(nptr));
// 	printf("%d\n", atoi(nptr));
// 	return (0);
// }