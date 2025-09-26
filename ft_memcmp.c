/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnnya <nnnya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 14:10:45 by smurayam          #+#    #+#             */
/*   Updated: 2025/09/26 17:57:35 by nnnya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < n)
	{
		j = *((unsigned char *)s1 + i) - *((unsigned char *)s2 + i);
		if (j != 0)
			return (j);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	const void	*s1 = "aaaa";
// 	const void	*s2 = "aaab";
// 	size_t		n;

// 	n = 4;
// 	printf("%d\n", ft_memcmp(s1, s2, n));
// 	printf("%d\n", memcmp(s1, s2, n));
// 	return (0);
// }
// // check the neccessity of "if"