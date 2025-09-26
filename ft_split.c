/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnnya <nnnya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 07:07:53 by smurayam          #+#    #+#             */
/*   Updated: 2025/09/26 17:58:49 by nnnya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strlen(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);

int	count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != 0)
	{
		if ((i == 0 || s[i - 1] == c) && s[i] != c)
			count++;
		i++;
	}
	return (count);
}

int	length_of_words(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		i;
	int		j;
	int		word_len;

	i = 0;
	j = 0;
	ptr = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	while (i < count_words(s, c))
	{
		while (s[j] == c)
		{
			j++;
		}
		word_len = length_of_words(&s[j], c);
		ptr[i] = ft_substr(s, j, word_len);
		j += word_len;
		i++;
	}
	return (ptr);
}

// int	main(void)
// {
// 	char const	*s;
// 	char		**tab;
// 	char		c;

// 	s = "   hey kevin ! ";
// 	c = ' ';
// 	tab = ft_split(s, c);
// 	for (int i = 0; tab[i]; i++)
// 		printf("%s\n", tab[i]);
// 	// printf("%d\n", count_words(s, c)); // 3
// 	// // printf("%p\n", heads_line(s, c));
// 	// // printf("%s\n", heads_line(s, c));
// 	// printf("%p\n", ft_split(s, c));
// 	return (0);
// }
// // Whether it's c or not is important
// // malloc's null guard and substr null guard free