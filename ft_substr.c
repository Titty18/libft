/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conde-an <conde-an@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 15:56:49 by conde-an          #+#    #+#             */
/*   Updated: 2023/09/05 15:59:57 by conde-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h> 

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*a;
	int		j;

	j = 0;
	if (!s)
		return (NULL);
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	if (start >= ft_strlen(s))
		len = 0;
	a = malloc(sizeof(char) * (len + 1));
	if (!a)
		return (NULL);
	while (len > 0)
	{
		a[j] = ((char *)s)[start + j];
		j++;
		len--;
	}
	a[j] = '\0';
	return (a);
}