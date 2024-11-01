/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mestefan <mestefan@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 22:12:13 by mestefan          #+#    #+#             */
/*   Updated: 2023/11/19 22:12:16 by mestefan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
#include <stdio.h>

int ft_isdigit(int c);

int	main(void)
{
	int	result;

    result = ft_isdigit('1');
    
    if (result != 0)
    {
        printf("'1' is a digit character.\n");
    } 
    else 
    {
        printf("'A' is not a digit character.\n");
    }

    result = ft_isdigit(127);
    
    if (result != 0) 
    {
        printf("127 is a digit character.\n");
    }
    else
    {
        printf("127 is not a digit character.\n");
    }

    return 0;
}
*/
int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
