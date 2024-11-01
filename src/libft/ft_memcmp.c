/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mestefan <mestefan@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 22:31:06 by mestefan          #+#    #+#             */
/*   Updated: 2023/11/19 22:31:09 by mestefan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"
/*
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n);

int	main(void)
{
	const char *str1 = "Hello";
    const char *str2 = "ello";

    size_t size = 5;

    int result = ft_memcmp(str1, str2, size);

    if (result == 0) 
    {
        printf("The memory blocks are equal.\n");
    } 
    else 
    {
        printf("Memory blocks differ at byte index: ");
        for (size_t i = 0; i < size; i++) 
        {
            if (str1[i] != str2[i]) 
            {
                printf("%zu ", i);
            }
        }
        printf("\n");
    }

    return 0;
}
*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}
