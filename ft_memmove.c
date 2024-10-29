/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzaanoun <mzaanoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 22:49:15 by mzaanoun          #+#    #+#             */
/*   Updated: 2024/10/28 22:00:28 by mzaanoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*tempdes;
	unsigned char		*tempsrc;
	size_t				i;

	if (!dst && !src)
		return (dst);
	tempdes = dst;
	tempsrc = (unsigned char *)src;
	if (tempdes > tempsrc && tempdes < tempsrc + len)
	{
		while (len-- > 0)
		{
			tempdes[len] = tempsrc[len];
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			tempdes[i] = tempsrc[i];
			i++;
		}
	}
	return (dst);
}
// int main()
// {
// 	char data[] = "12345";
// 	printf("%s",ft_memmove(data + 2, data, 3));
// }
