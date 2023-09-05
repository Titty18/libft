/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conde-an <conde-an@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 16:02:13 by conde-an          #+#    #+#             */
/*   Updated: 2023/09/05 16:40:48 by conde-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	ss1;
	size_t	ss2;
	char	*dest;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	ss1 = ft_strlen(s1);
	ss2 = ft_strlen(s2);
	dest = (char *)malloc(ss1 + ss2 + 1);
	if (dest == NULL)
		return (NULL);
	ft_strlcpy(dest, s1, ss1 + 1);
	ft_strlcat(dest, s2, ss1 + ss2 + 1);
	return (dest);
}