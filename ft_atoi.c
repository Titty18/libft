/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conde-an <conde-an@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 15:00:15 by conde-an          #+#    #+#             */
/*   Updated: 2023/09/05 15:04:33 by conde-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(const char *str)
{
	int		i;
	int		flag;
	long	nbr;

	i = 0;
	nbr = 0;
	flag = 1;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	if (str[i] == '-')
		flag = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		nbr = nbr * 10 + str[i] - '0';
		i++;
	}
	if (flag == 1 && nbr > 2147483647)
		return (-1);
	if (flag == -1 && nbr > 2147483648)
		return (0);
	return (nbr * flag);
}
// int main(void)
// {
// 	const char s[] = "-000000021474836487328579287";
// 	printf("%d\n", ft_atoi(s));
// 	printf("%d\n", atoi(s));
// }