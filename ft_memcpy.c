/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conde-an <conde-an@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 04:37:45 by conde-an          #+#    #+#             */
/*   Updated: 2023/08/14 05:11:18 by conde-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//ft_memcpy, which is a function used to copy a block of memory from a source location to a destination location.

#include "libft.h"
#include <stdio.h>
#include <string.h>

void *ft_memcpy(void *dest, const void *src, size_t len)
// The use of the asterisk (*) before ft_memcpy indicates that the function will return a pointer.

/*  void *dest: A pointer to the destination memory location where the copied data will be stored.
    const void *src: A pointer to the source memory location from which the data will be copied.
    size_t len: The number of bytes to be copied from the source to the destination.*/

{
    unsigned char *start = (unsigned char *)dest;  //We use unsigned char for the pointer start to ensure proper byte assignment without sign issues.
    const unsigned char *from = (const unsigned char *)src; //Using const in the parameter const void *src is a way to indicate that the function ft_memcpy will not modify the data pointed to by the source pointer src.

    while (len > 0)/* The loop while keep going until len that has a specific byte reach to zero*/
    {
        *start = *from; // Copy the byte from source to destination
        start++;     // Move destination pointer to the next byte
        from++;     // Move source pointer to the next byte
        len--;     // Decrement the remaining bytes to copy
    }

    return (dest); // Return the pointer to the destination
}