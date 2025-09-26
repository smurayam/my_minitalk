/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnnya <nnnya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 16:03:31 by smurayam          #+#    #+#             */
/*   Updated: 2025/09/26 17:59:07 by nnnya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i] != 0)
	{
		f(i, &s[i]);
		i++;
	}
}
void	my_upchar(unsigned int i, char *c)
{
	(void)i;
	if ('a' <= *c && *c <= 'z')
		*c -= 32;
}

// int	main(void)
// {
// 	char s[] = "nnnya";
// 	ft_striteri(s, my_upchar);
// 	printf("%s\n", s);
// 	return (0);
// }