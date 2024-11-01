/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mestefan <mestefan@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 20:04:26 by mestefan          #+#    #+#             */
/*   Updated: 2023/11/19 20:04:40 by mestefan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
#include <stdio.h>

int ft_isalnum(int c);

int	main(void)
{
	int	result;

    result = ft_isalnum('1');
    
    if (result != 0)
    {
        printf("'1' is an alnum character.\n");
    } 
    else 
    {
        printf("'1' is not an alnum character.\n");
    }

    result = ft_isalnum(65);
    
    if (result != 0) 
    {
        printf("65 is an alnum character.\n");
    }
    else
    {
        printf("65 is not an alnum character.\n");
    }

    return 0;
}
*/
int	ft_isalnum(int c)
{
	return ((c >= '0' && c <= '9') 
		|| (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
