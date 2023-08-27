/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conde-an <conde-an@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 05:52:16 by conde-an          #+#    #+#             */
/*   Updated: 2023/08/17 06:45:47 by conde-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t ft_strlen(const char *str) // instead of int I used size_t because it is more suitable for representing object sizes and array lengths. When working with lengths, buffer sizes, and indices, it's good practice to use size_t for a consistent representation
{
    size_t i;
    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}


//ft_strlcat is a function that's used for concatenating strings src that it will be add at dest

size_t ft_strlcat(char *dest, const char *src, size_t d_buffer)
{
    size_t i;
    size_t d;
    size_t s;

    if (dest == NULL)
        return 0;

    d = ft_strlen(dest);
    s = ft_strlen(src);

    if (d_buffer <= d) // Corrected condition
        return d + s;   // Return the total length of concatenated string

    i = 0;
    while (src[i] != '\0' && d + 1 + i < d_buffer - 1) // if both condition are satisfied we put (-1 This ensures that we leave space for the null-terminator in the destination buffer)
    {
        dest[d + i] = src[i];
        i++;
    }
    dest[d + i] = '\0';

    return d + s;
}

