/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnnya <nnnya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 07:05:53 by smurayam          #+#    #+#             */
/*   Updated: 2025/09/26 02:07:57 by nnnya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

// int	main(void)
// {
// 	const char	*s;

// 	s = "wa-i";
// 	printf("%zu\n", ft_strlen(s));
// 	printf("%zu\n", strlen(s));
// 	return (0);
// }
