/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conde-an <conde-an@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 02:56:20 by conde-an          #+#    #+#             */
/*   Updated: 2023/09/05 14:14:01 by conde-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* memcmp — compare bytes in memory
   The memcmp() function shall return an integer greater than, equal
   to, or less than 0, if the object pointed to by s1 is greater
   than, equal to, or less than the object pointed to by s2,
   respectively.
*/

#include "libft.h"
#include <stdio.h>
#include <string.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    const unsigned char *string1;
    const unsigned char *string2;

    i = 0;
    string1 = (unsigned char *)s1;
    string2 = (unsigned char *)s2;

      if (n == 0)
    {
        return 0; 
    }

    while (i < n)
    {
        if (string1[i] != string2[i])
        {
            return (string1[i] - string2[i]);
        }
        i++;
    }

    return 0; 
}

