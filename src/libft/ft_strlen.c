/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mestefan <mestefan@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 04:09:17 by mestefan          #+#    #+#             */
/*   Updated: 2023/11/20 04:09:19 by mestefan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stddef.h>
/*
#include <stdio.h>

size_t	ft_strlen(const char *s);

int main(int ac, char **av)
{
    (void)ac;
    int	result = ft_strlen(av[1]);
    printf ("length is %d\n", result);
    return (0);
}
*/
size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
