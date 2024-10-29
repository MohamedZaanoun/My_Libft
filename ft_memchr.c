/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzaanoun <mzaanoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 17:57:28 by mzaanoun          #+#    #+#             */
/*   Updated: 2024/10/28 12:00:02 by mzaanoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	ac;

	str = (unsigned char *)s;
	ac = (char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == ac)
		{
			return ((void *)(s + i));
		}
		i++;
	}
	return (NULL);
}
// int main(){
// 	char d = 'o';
// 	char s[] = "foji";
// 	printf("%s",ft_memchr(s,d,2));
// }
