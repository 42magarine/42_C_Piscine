/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbock <fbock@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 12:14:23 by fbock             #+#    #+#             */
/*   Updated: 2023/04/27 15:12:18 by fbock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	str_len(char *str)
{
	char			*str_start;
	unsigned int	str_len;

	str_start = str;
	str_len = 0;
	while (*str != '\0')
	{
		str_len++;
		str++;
	}
	str = str_start;
	return (str_len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{	
	unsigned int	dest_content;
	char			*dest_null;
	const char		*source_diff;
	unsigned int	size_left;

	source_diff = src;
	dest_null = dest;
	size_left = size;
	while (size_left-- != 0 && *dest_null != '\0')
		dest_null++;
	dest_content = dest_null - dest;
	size_left = size - dest_content;
	if (size_left == 0)
		return (dest_content + str_len(src));
	while (*source_diff != '\0')
	{
		if (size_left != 1)
		{
			*dest_null++ = *source_diff;
			size_left--;
		}
		source_diff++;
	}
	*dest_null = '\0';
	return (dest_content + (source_diff - src));
}
/*
#include <stdio.h>
#include <string.h>

// Add your original str_len and ft_strlcat functions here

void test_ft_strlcat(char *dest, char *src, unsigned int size) {
    printf("\nBefore ft_strlcat:\n");
    printf("Dest: '%s'\n", dest);
    printf("Src: '%s'\n", src);
    printf("Size: %u\n", size);
    
    unsigned int result = ft_strlcat(dest, src, size);
    
    printf("\nAfter ft_strlcat:\n");
    printf("Dest: '%s'\n", dest);
    printf("Src: '%s'\n", src);
    printf("Size: %u\n", size);
    printf("Result: %u\n", result);
}

int main() {
    // Test 1: Basic case
    char dest1[100] = "Hello, ";
    char *src1 = "World!";
    test_ft_strlcat(dest1, src1, sizeof(dest1));

    // Test 2: Empty source string
    char dest2[100] = "Hello, ";
    char *src2 = "";
    test_ft_strlcat(dest2, src2, sizeof(dest2));

    // Test 3: Empty destination string
    char dest3[100] = "";
    char *src3 = "World!";
    test_ft_strlcat(dest3, src3, sizeof(dest3));

    // Test 4: Both strings are empty
    char dest4[100] = "";
    char *src4 = "";
    test_ft_strlcat(dest4, src4, sizeof(dest4));

    // Test 5: Insufficient space in the destination buffer
    char dest5[10] = "Hello, ";
    char *src5 = "World!";
    test_ft_strlcat(dest5, src5, sizeof(dest5));

    // Test 6: Destination buffer is exactly the right size
    char dest6[13] = "Hello, ";
    char *src6 = "World!";
    test_ft_strlcat(dest6, src6, sizeof(dest6));

    return 0;
}*/
