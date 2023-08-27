/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conde-an <conde-an@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 05:44:00 by conde-an          #+#    #+#             */
/*   Updated: 2023/08/14 07:15:44 by conde-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//function that is used to copy a specified number of bytes from one memory location to another. It ensures that the copying is done correctly even if the source and destination memory regions overlap. This is the key difference between memmove and memcpy.

#include "libft.h"
#include <stdio.h>
#include <string.h>

//void	*ft_memmove(void *dst, const void *src, size_t len)
// The use of the asterisk (*) before ft_memcpy indicates that the function will return a pointer.
//memmove takes care to perform the copying in a manner that considers the order of copying to avoid overwriting data that hasn't been copied yet that avoids data corruption due to overlaps.

/* dst: A pointer to the destination memory location where the data will be copied.
    src: A pointer to the source memory location from which the data will be copied.
    n: The number of bytes to be copied.


	char	*s;
	char	*d;
	size_t	len; //  is a variable that holds the number of bytes to be copied.
    int i; // (i) is a counter variable used in the loop for copying when the destination is before the source(from to end index to the zero one).*/
    
void *ft_memmove(void *dst, const void *src, size_t len)
{
    char *s = (char *)src;
    char *d = (char *)dst;
    int i = 0;

    if (d > s)
    {
        while (len > 0)
        {
            len--;
            d[len] = s[len];
        }
    }
    else
    {
        while (i < len)
        {
            d[i] = s[i];
            i++;
        }
    }
    return dst;
}