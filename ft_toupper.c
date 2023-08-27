/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conde-an <conde-an@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 07:06:02 by conde-an          #+#    #+#             */
/*   Updated: 2023/08/17 08:24:51 by conde-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//ft_toupper.c is used to convert a lowercase letter to its corresponding uppercase letter. It's part of the <ctype.h>

/*It checks whether the character is a lowercase letter (between 'a' and 'z') and returns the corresponding uppercase letter CONVERSION ON SINGLE CHARACHTERS mean If you want to convert entire strings to uppercase, you'll need to loop through the string and apply toupper to each character. If the character is not a lowercase letter, it's returned as is. 
 If you pass 'B', it returns 'B' because 'B' is already an uppercase letter.*/

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
    {
        // Convert lowercase letter to uppercase using ASCII
        return c - ('a' - 'A'); // 32 is a difference btw low and up letter ASCII
    }
    else
    {
        return c; // Return unchanged if not a lowercase letter
    }
}