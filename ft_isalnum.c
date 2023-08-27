/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conde-an <conde-an@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 10:20:13 by conde-an          #+#    #+#             */
/*   Updated: 2023/08/12 12:25:57 by conde-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <unistd.h>
#include "libft.h"

/*ISALNUM checking if the character it is ALPHANUMERIC mean if it is UPPER CASE or LOW CASE alphabetic letter or if it is a DIGIT bw '0' to '9'*/

int ft_isalnum(char c)
{
    if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
    {
        return (1); // Alphanumeric character found
    }
    else
    {
        return 0; // Non-alphanumeric character found
    }
}