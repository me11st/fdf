/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mestefan <mestefan@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 04:09:47 by mestefan          #+#    #+#             */
/*   Updated: 2023/11/20 04:09:49 by mestefan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"
/*
#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

int	main(void)
{
	const char *largestring = "Foo Bar Baz";
	const char *smallstring = "Bar";
	char *ptr;

	ptr = ft_strnstr(largestring, smallstring, 10);
	if (ptr)
    {
        printf("Substring found at position: %ld\n", ptr - largestring);
    }
    else
    {
        printf("Substring not found\n");
    }
	return (0);
}
*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (*needle == 0)
		return ((char *)(haystack));
	if (len == 0)
		return (NULL);
	i = 0;
	while (haystack[i] && i < len && len > 0)
	{
		j = 0;
		while (needle[j] && (needle[j] == haystack[i + j] && i + j < len))
			j++;
		if (needle[j] == 0)
		{
			return ((char *)(haystack + i));
		}
		i++;
	}
	return (NULL);
}
