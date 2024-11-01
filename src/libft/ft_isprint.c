/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mestefan <mestefan@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 22:20:47 by mestefan          #+#    #+#             */
/*   Updated: 2023/11/19 22:20:51 by mestefan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
#include <stdio.h>

int ft_isprint(int c);

int	main(void)
{
	int	result;

    result = ft_isprint(32);
    
    if (result != 0)
    {
        printf("32 is a print character.\n");
    } 
    else 
    {
        printf("32 is not a print character.\n");
    }

    result = ft_isprint(127);
    
    if (result != 0) 
    {
        printf("127 is a print character.\n");
    }
    else
    {
        printf("127 is not a print character.\n");
    }

    return 0;
}
*/
int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
