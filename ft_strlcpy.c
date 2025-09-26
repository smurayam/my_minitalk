/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnnya <nnnya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 03:38:29 by smurayam          #+#    #+#             */
/*   Updated: 2025/09/26 17:46:25 by nnnya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *s);

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	j = ft_strlen(src);
	i = 0;
	if (size == 0)
		return (j);
	while (i < size - 1 && src[i] != 0)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (j);
}

// int main(void)
// {
//     // 通常のテストケース
//     char dst1[50] = "initial_value";
//     char dst2[50] = "initial_value";
//     const char *src = "new_string";

//     size_t size1 = 5;

//     size_t size3 = 50;

//     printf("テスト1: コピーサイズ %zu\n", size1);
//     printf("ft_strlcpyの戻り値: %zu\n", ft_strlcpy(dst1, src, size1));
//     printf("標準strlcpyの戻り値: %zu\n", strlcpy(dst2, src, size1));
//     printf("ft_strlcpyの結果: %s\n", dst1);
//     printf("標準strlcpyの結果: %s\n\n", dst2);

//     // サイズ0のテスト
//     printf("テスト2: コピーサイズ 0\n");
//     printf("ft_strlcpyの戻り値: %zu\n", ft_strlcpy(dst1, src, 0));
//     printf("標準strlcpyの戻り値: %zu\n\n", strlcpy(dst2, src, 0));

//     // dstがNULLのテスト
//     printf("テスト3: dstがNULL\n");
//     printf("ft_strlcpyの戻り値: %zu\n\n", strlcpy(NULL, src, size3));

//     // srcがNULLのテスト
//     printf("テスト4: srcがNULL\n");
//     printf("ft_strlcpyの戻り値: %zu\n\n", ft_strlcpy(dst1, NULL, size3));

//     // dstとsrcの両方がNULLのテスト
//     printf("テスト5: dstとsrcの両方がNULL\n");
//     printf("ft_strlcpyの戻り値: %zu\n\n", strlcpy(NULL, NULL, size3));

//     return (0);
// }