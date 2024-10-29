/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzaanoun <mzaanoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:56:15 by mzaanoun          #+#    #+#             */
/*   Updated: 2024/10/24 19:53:20 by mzaanoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*temp;
	size_t	i;

	i = 0;
	temp = (char *)s;
	while (i < n)
	{
		temp[i] = '0';
		i++;
	}
}
// int main()
// {
// 	char r[] = "simo";
// 	ft_bzero(r,4);
// }
