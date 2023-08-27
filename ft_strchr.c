/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conde-an <conde-an@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 08:47:38 by conde-an          #+#    #+#             */
/*   Updated: 2023/08/17 09:28:26 by conde-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//ft_strchr the function's purpose is to find and identify the position of a particular character inside a piece of text (string). It searches through the characters in the string and stops when it finds the first occurrence of the character you're looking for.

#include "libft.h"
#include <stdio.h>

char *ft_strchr(const char *s, int c)
{
    char search_character = (char)c;

    while (*s)
    {
        if (*s == search_character) // Compare with search_character
            return (char *)s;
        s++;
    }
    
    if (*s == search_character) // Compare with search_character at the end
        return (char *)s;
    
    return NULL; // Character not found
}
