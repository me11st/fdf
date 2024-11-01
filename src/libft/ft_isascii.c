/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mestefan <mestefan@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 22:05:33 by mestefan          #+#    #+#             */
/*   Updated: 2023/11/19 22:05:40 by mestefan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
#include <stdio.h>

int ft_isascii(int c);

int	main(void)
{
	int	result;

    result = ft_isascii('1');
    
    if (result != 0)
    {
        printf("'1' is an ascii character.\n");
    } 
    else 
    {
        printf("'1' is not an ascii character.\n");
    }

    result = ft_isascii(127);
    
    if (result != 0) 
    {
        printf("127 is an ascii character.\n");
    }
    else
    {
        printf("127 is not an ascii character.\n");
    }

    return 0;
}
*/
int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
