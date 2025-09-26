/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnnya <nnnya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 13:19:09 by smurayam          #+#    #+#             */
/*   Updated: 2025/09/26 17:59:53 by nnnya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s);

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (0 <= i)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (0);
}

// int	main(void)
// {
// 	const char	s[] = "sleepy";
// 	int			c;

// 	c = 's';
// 	printf("%p\n", ft_strrchr(s, c));
// 	printf("%s\n", ft_strrchr(s, c));
// 	return (0);
// }