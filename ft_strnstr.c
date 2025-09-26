/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnnya <nnnya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 17:26:22 by smurayam          #+#    #+#             */
/*   Updated: 2025/09/26 17:59:47 by nnnya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s);

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!little[0])
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i] && big[i + j] == little[j] && (i + j) < len)
		{
			j++;
		}
		if (j == ft_strlen(little))
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	printf("%s\n", ft_strnstr("qwertyuiop", "ertyu", 10));
// 	printf("%s\n", strnstr("qwertyuiop", "ertyu", 10));
// 	return (0);
// }
