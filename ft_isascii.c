/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conde-an <conde-an@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 12:32:40 by conde-an          #+#    #+#             */
/*   Updated: 2023/08/13 05:56:46 by conde-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The isascii() function shall test whether c is a 7-bit US-ASCII character code.
//The isascii() function is defined on all integer values.The ASCII range, which is from 0 to 127..
//RETURN VALUE : The isascii() function shall return non-zero if c is a 7-bit US-ASCII character code between 0 and octal 0177 inclusive; otherwise, it shall return 0.


#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int ft_isascii(int c)
{
    if (c >= 0 && c <= 127)
    {
        return (1);
    }
    else
    {
        return (0);
    }      
}