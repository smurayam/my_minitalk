/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smurayam <smurayam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 13:19:09 by smurayam          #+#    #+#             */
/*   Updated: 2024/11/25 14:09:19 by smurayam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

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

// int	ft_strlen(const char *s)
// {
// 	int	i;

// 	i = 0;
// 	while (s[i] != '\0')
// 	{
// 		i++;
// 	}
// 	return (i);
// }
// char	*ft_strrchr(const char *s, int c)
// {
// 	int i;
// 	i = ft_strlen(s);
// 	while (i >= 0)
// 	{
// 		if (s[i] == (char)c)
// 			return ((char *)&s[i]);
// 		i--;
// 	}
// 	return (NULL);
// }