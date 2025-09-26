/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnnya <nnnya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 15:14:56 by smurayam          #+#    #+#             */
/*   Updated: 2025/09/26 17:59:36 by nnnya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ptr;
	unsigned int	i;

	i = 0;
	ptr = ft_strdup(s);
	while (s[i] != 0)
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	return (ptr);
}
// static char	my_upchar(unsigned int i, char c)
// {
// 	(void)i;
// 	if ('a' <= c && c <= 'z')
// 		c -= 32;
// 	return (c);
// }

// size_t		ft_strlen(const char *s);
// int	main(void)
// {
// 	char const *s = "gurara";

// 	char (*f)(unsigned int, char) = my_upchar;
// 	printf("%s\n", ft_strmapi(s, f));
// 	return (0);
// }