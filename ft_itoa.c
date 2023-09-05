/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conde-an <conde-an@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 17:55:14 by conde-an          #+#    #+#             */
/*   Updated: 2023/09/05 17:56:58 by conde-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	get_number_length(int n)
{
	int		length;
	long	i;

	i = n;
	length = 0;
	if (i == 0)
		return (1);
	if (i < 0) 
	{
		length++;
		i = -i;
	}
	while (i > 0) 
	{
		length++;
		i /= 10;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	long	j;

	j = n;
	str = (char *)malloc((get_number_length(n) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = get_number_length(n) + 1;
	str[--i] = '\0';
	if (j < 0)
	{
		str[0] = '-';
		j = -j;
	}
	if (j == 0)
		str[--i] = j % 10 + 48;
	while (j > 0)
	{
		str[--i] = j % 10 + 48;
		j /= 10;
	}
	return (str);
}