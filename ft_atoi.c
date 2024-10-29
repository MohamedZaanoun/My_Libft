/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzaanoun <mzaanoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:02:12 by mzaanoun          #+#    #+#             */
/*   Updated: 2024/10/29 15:49:24 by mzaanoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int					sign;
	int					i;
	unsigned long long	res;
	long int			checker;

	sign = 1;
	i = 0;
	res = 0;
	checker = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign *= -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		checker = res;
		res = res * 10 + (str[i++] - '0');
	}
	if (checker != res / 10 && sign == 1)
		return (-1);
	if (checker != res / 10 && sign == -1)
		return (0);
	return (res * sign);
}
// int	main()
// {
// 	char	str[] = "     18446744073709551616";
// 	printf("%d/", ft_atoi(str));
// 	printf("%d", atoi(str));
// 	return (0);
// }
