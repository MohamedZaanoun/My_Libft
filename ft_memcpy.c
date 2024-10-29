/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzaanoun <mzaanoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 20:40:20 by mzaanoun          #+#    #+#             */
/*   Updated: 2024/10/24 22:06:38 by mzaanoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*tempdes;
	unsigned char	*tempsrc;
	size_t			i;

	if (!dst && !src)
		return (dst);
	tempdes = (unsigned char *)dst;
	tempsrc = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		tempdes[i] = tempsrc[i];
		i++;
	}
	return (dst);
}
// int main(){
// 	char des[40] = "vvgg";
// 	char res[] = "aywaaaaa";
// 	printf("%s",ft_memcpy(des,res,6));

// }
