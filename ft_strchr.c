/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzaanoun <mzaanoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:24:51 by mzaanoun          #+#    #+#             */
/*   Updated: 2024/10/26 15:00:24 by mzaanoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	if (c == '\0')
		return ((char *)(s));
	while (s[i])
	{
		if (s[i] == c)
		{
			return ((char *)(s + i));
		}
		i++;
	}
	return (NULL);
}
// int main(){
// 	char d = 'f';
// 	char s[] = "foji";
// 	printf("%s",ft_strchr(s,d));
//}
