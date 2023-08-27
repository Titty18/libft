/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conde-an <conde-an@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 10:24:15 by conde-an          #+#    #+#             */
/*   Updated: 2023/08/18 10:02:43 by conde-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//ft_strrchr function designed to search for the last occurrence of a specific character in a given string.  takes two parameters: a pointer to the beginning of a null-terminated string (char*), and a character to search for (char). The function is expected to return a pointer to the last occurrence of the specified character in the string.  If the character IS NOT FOUND, the function would return a null pointer (NULL) The search is conducted from the end of the string towards the beginning "reverse"


#include "libft.h"
#include <stdio.h>

char *ft_strrchr(const char *s, char c)
{
    int i = 0;

    // Calculate the length of the string 's'
    while (s[i] != '\0')
        i++;

    // Search for 'c' starting from the end of the string
    while (i >= 0)
    {
        if (s[i] == c)
            return ((char *)&s[i]);  // Return a pointer to the found character

        i--;
    }

    // If 'c' is not found, return NULL
    return (NULL);
}
