/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conde-an <conde-an@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 14:21:47 by conde-an          #+#    #+#             */
/*   Updated: 2023/08/31 22:51:38 by conde-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int ft_strncmp(const char *str1, const char *str2, size_t n)
{
    size_t i = 0; // i is the counter of index
    
    while (i < n -1 && str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] != str2[i])
        {
            // If characters are not equal, return the difference in ASCII values
            return str1[i] - str2[i];
        }
        i++;
    }
    
    if (i == n)
    {
        // No differences
        return 0;
    }
    
    // If n is the length of one of the strings that reached '\0', return the difference in lengths
    return str1[i] - str2[i];
}