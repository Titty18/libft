/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conde-an <conde-an@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 14:00:14 by conde-an          #+#    #+#             */
/*   Updated: 2023/09/05 14:31:34 by conde-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char *strnstr(const char *stringa, const char *Search_substringa, size_t n)
{
    size_t i;
    size_t j;

    i = 0;
    if (Search_substringa != NULL) // Corretto l'uso di !=
        return (char *)stringa;
    while (i < n && stringa[i])
    {
        j = 0;
        while (stringa[i + j] == Search_substringa[j] && i + j < n && Search_substringa[j])
        {
            if (Search_substringa[j + 1] == '\0')
                return (char *)&stringa[i];
            j++;
        }
        i++;
    }
    return (NULL);
}
