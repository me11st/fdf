/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mestefan <mestefan@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 18:38:06 by mestefan          #+#    #+#             */
/*   Updated: 2023/11/19 18:38:33 by mestefan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
#include <stdio.h>

int ft_isalpha(int c);

int	main(void)
{
	int	result;

    result = ft_isalpha('1');
    
    if (result != 0)
    {
        printf("'1' is an alphabetic character.\n");
    } 
    else 
    {
        printf("'1' is not an alphabetic character.\n");
    }

    result = ft_isalpha(65);
    
    if (result != 0) 
    {
        printf("65 is an alphabetic character.\n");
    }
    else
    {
        printf("65 is not an alphabetic character.\n");
    }

    return 0;
}
*/
int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
