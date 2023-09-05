/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conde-an <conde-an@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 15:35:33 by conde-an          #+#    #+#             */
/*   Updated: 2023/09/05 15:45:47 by conde-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h> 
#include <string.h> 

char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	i;
	size_t	tot;

	tot = ft_strlen((char *)s1);
	s2 = malloc(sizeof(char) * (tot + 1));
	if (tot == '\0')
		return (NULL);
	i = 0;
	while (tot > 0)
	{
		s2[i] = s1[i];
		i++;
		tot--;
	}
	s2[i] = '\0';
	return (s2);
}