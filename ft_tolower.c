/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conde-an <conde-an@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 07:44:45 by conde-an          #+#    #+#             */
/*   Updated: 2023/08/17 08:39:31 by conde-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
    {
        // Convert Uppercase letter to lowcase using ASCII
        return c - ('A' - 'a'); // 32 is a difference btw up and low letter ASCII
    }
    else
    {
        return c; // Return unchanged if not a uppercase letter
    }
}