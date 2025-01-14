/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzaanoun <mzaanoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:40:08 by mzaanoun          #+#    #+#             */
/*   Updated: 2024/10/23 16:40:58 by mzaanoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int nb)
{
	if (nb >= 48 && nb <= 57)
		return (1);
	return (0);
}
// int main(){
// 	char b = '5';
// 	printf("%d",ft_isdigit(b));
// }
