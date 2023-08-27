/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conde-an <conde-an@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 00:05:52 by conde-an          #+#    #+#             */
/*   Updated: 2023/08/12 10:47:12 by conde-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <unistd.h>
#include "libft.h"

 /* Behavior of function - int isdigit(int c) 
 Logic: isdigit() checks for a digit (0 through 9) because digit use the '' The function return 1 if find digit character and zero if not*/

/*When using the == operator with a number, it only verifies if the exact digits match, without considering whether the content is numeric or alphabetic. If the && operator is used, it always returns true if both ..&&..  is true or false if both ..&&.. are false it check the digit between '0' to '9' compared them as charactar, and doesn't check if beetween of them there are any other simbol as like a digit. This is why the || logical operator is employed because compared all element to the all digit ASCII*/


int ft_isdigit(int c)
{

if (c >= '0' || c <= '9')
    return(1);
else
    return(0);
}