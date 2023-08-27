/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conde-an <conde-an@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 10:03:48 by conde-an          #+#    #+#             */
/*   Updated: 2023/08/17 05:56:46 by conde-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The strlen() function in C takes a string str as a parameter. 

Return Value of strlen() 

Return Type: int 

The strlen() function in C returns an integer value, excluding the null character, which represents the length of the input string.*/


#include "libft.h"
#include <stdio.h> 
#include <ctype.h>

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}