/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conde-an <conde-an@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 17:58:47 by conde-an          #+#    #+#             */
/*   Updated: 2023/09/05 18:00:41 by conde-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*space;
	size_t			len;

	i = 0;
	len = ft_strlen(&s[i]);
	space = (char *)malloc(sizeof(char) * (len + 1));
	if (!space)
		return (NULL);
	while (s[i])
	{
		space[i] = f(i, s[i]);
		i++;
	}
	space[i] = '\0';
	return (space);
}