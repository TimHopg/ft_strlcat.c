/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thopgood <thopgood@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 11:43:25 by thopgood          #+#    #+#             */
/*   Updated: 2024/01/31 08:22:53 by thopgood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

same as strcat but includes size of dest buffer
returns length of dest string

*/

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len;
	unsigned int	slen;

	len = 0;
	slen = 0;
	while (dest[len] != '\0' && size-- > 0)
	{
		len++;
	}
	while (src[slen] != '\0' && size-- > 1)
	{
		dest[len] = src[slen];
		len++;
		slen++;
	}
	dest[len] = '\0';
	return (len);
}
#include <stdio.h>
#include <string.h>

#define BUF 0

int	main(void)
{
	char str[BUF] = "hello ";
	char str1[20] = "world";

	printf("str -> %s\n", str);
	printf("str1 -> %s\n", str1);
	printf("Output -> %d\n", ft_strlcat(str, str1, BUF));
	printf("Using ft_strlcat -> %s\n", str);

	// char str[BUF] = "hello ";
	// char str1[20] = "world";

	// printf("str -> %s\n", str);
	// printf("str1 -> %s\n", str1);
	// printf("Output -> %d\n", strlcat(str, str1, BUF));
	// printf("Using strlcat -> %s\n", str); */
}
