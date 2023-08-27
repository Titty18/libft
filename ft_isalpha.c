/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conde-an <conde-an@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 22:20:51 by conde-an          #+#    #+#             */
/*   Updated: 2023/08/12 10:22:51 by conde-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*isalpha()
              checks  for  an alphabetic character; 
              which isalpha() is true—letters which are neither uppercase nor lowercase.
RETURN VALUE
       The values returned are nonzero if the character c falls into the tested class, and zero  if
       not.*/

/*#include "libft.h"*/
#include <ctype.h> /*The C <ctype.h> header file declares a set of functions to classify (and transform) individual characters. For example, isupper() checks whether a character is uppercase or not.*/
#include <unistd.h>
#include "libft.h" /* own library*/

/* int isalpha(int c); behavior function 

Logic : we need check all single input if it is a character or not (numbers or simbols) that's why we choose to use >= and <= of parameter and print it out the function not required to check a specific character that's why we didn't use != and == of parameter to print out a specific character*/

int ft_isalpha (char c) 

{

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return (1); // if c it is an alphabetic character
    else
        return (0); // if c it is NOT an alphabetic character but numbers or simbols
}