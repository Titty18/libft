/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conde-an <conde-an@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 12:19:48 by conde-an          #+#    #+#             */
/*   Updated: 2023/08/14 05:09:55 by conde-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"
#include <stdio.h>
#include <string.h>

/*void *ft_memset (void *ptr, int c, size_t len)
The use of the asterisk (*) before ft_memset indicates that the function will return a pointer.
The declaration void *ft_memset(void *ptr, int c, size_t len) specifies that the ft_memset function takes three parameters: pointer *ptr, an integer c, and a value lrn of type size_t

The pointer *ptr represents the block of memory to be initialized.
The integer c represents the value to be assigned to each byte of the memory block.
The value len represents the number of bytes to be initialized.*/

void *ft_memset (void *ptr, int c, size_t len)
{
    unsigned char *var; //variable that I assigned bc the *ptr pointer points in VOID
    var = (unsigned char *)ptr;
    /*We use unsigned char for the pointer var in ft_memset to ensure proper byte assignment without sign issues.
    Since memset deals with bytes (values 0 to 255), unsigned char signifies byte manipulation, sidestepping sign problems that can occur with other data types.*/
	while (len > 0)/* The loop while keep going until len that has a specific byte reach to zero*/
	{
        /*Here the exactly function of ft_memset happened:*/
		*var = (unsigned char)c; // Set the value of the byte at the memory location pointed to by 'var' to 'c'
		var++;//This line increments the pointer var, causing it to point to the next byte in memory. This is essential to traverse through the memory block and assign values to each byte.
        len--;//This line decrements the counter len, which represents the number of bytes that still need to be initialized. As you assign values to the bytes, you decrease the counter until it reaches zero
	}
	return (ptr);
}