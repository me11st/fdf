/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mestefan <mestefan@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 20:01:48 by mestefan          #+#    #+#             */
/*   Updated: 2023/11/19 20:01:59 by mestefan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"
/*
#include <stdio.h>

void    ft_bzero(void *s, size_t n);

int main ()
{
    char buffer[] = "Hello, World!";
    size_t  n;

    n = 5;

    printf("Original Content: %s\n", buffer);

    ft_bzero(buffer, n);

    printf("Modified Content: %s\n", buffer);

    return (0);
}
*/
void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = s;
	i = 0;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}
