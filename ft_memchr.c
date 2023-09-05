/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conde-an <conde-an@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 23:49:04 by conde-an          #+#    #+#             */
/*   Updated: 2023/09/01 02:52:05 by conde-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
//scan memory for a character - The memchr() function shall locate the first occurrence of c (converted to an unsigned char) in the initial n bytes (each interpreted as unsigned char) of the object pointed to by s - function shall return a pointer to the located byte, or a null pointer if the byte does not occur in the object.

void *ft_memchr(const void *s, int c, size_t n)
/*s it is a pointer in n - c is a part of memory we want to check - n is a number of byte we want to check on part of memory c*/

/*The LOGIC:
void *.... is a generic pointer so we need indicate to exactly which data byte we want to point into that's why we create another pointer plus we use to unsigned char to convert it*/
{
    size_t i;
    i = 0; //index lenght
    const unsigned char *pointer = (const unsigned char *)s;
    //The reason unsigned char is used is that the memchr function operates on individual bytes, and the values of bytes can range from 0 to 255.
    
    while(i < n)
    { 
        if (*pointer == (unsigned char)c)
        { 
            return (void *)pointer;
        }
        pointer++; 
        i++; 
    }
    // If the byte is not found in the first n bytes, return NULL
    return(NULL);
}