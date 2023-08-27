/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conde-an <conde-an@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 07:23:13 by conde-an          #+#    #+#             */
/*   Updated: 2023/08/13 08:34:49 by conde-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Function isprint() takes a single argument in the form of an integer and returns a value of type int.

Even though, isprint() takes integer as an argument, character is passed to the function printable characters (32 to 126 is a range value). Internally, the character is converted to its ASCII value for the check.

If a character passed to isprint() is a printable character, it returns non-zero integer, if not it returns 0.

It is defined in <ctype.h> header file.*/


/*ASCII 0 to 31: These are control characters such as newline (\n), carriage return (\r), tab (\t), and others. They have special meanings in controlling formatting and behavior.

ASCII 127: This is the "delete" control character. It doesn't have a visible representation but historically had specific use cases for deleting data.*/


#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int ft_isprint(int c)
{
    if (c >= 32 && c <= 126)
    {
        return (1);
    }
    else if (c >= 0 && c <= 31 || c == 127)
    {
        return (0);
    }
}
