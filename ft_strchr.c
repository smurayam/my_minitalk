/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnnya <nnnya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 12:46:32 by smurayam          #+#    #+#             */
/*   Updated: 2025/09/26 17:58:55 by nnnya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] != 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i++;
	}
	if ((char)c == 0)
		return ((char *)(s + i));
	return (NULL);
}

// int	main(void)
// {
// 	int			c;
// 	const char	s[] = "aaa";

// 	c = 'e';
// 	// printf("%s\n", strchr(NULL, c));
// 	printf("%s\n", ft_strchr(s, 97));
// 	return (0);
// }