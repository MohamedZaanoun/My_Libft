/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzaanoun <mzaanoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:02:05 by mzaanoun          #+#    #+#             */
/*   Updated: 2024/10/26 17:03:59 by mzaanoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*occ;

	occ = NULL;
	i = 0;
	if (c == '\0')
		return ((char *)(s));
	while (s[i])
	{
		if (s[i] == c)
		{
			occ = (char *)(s + i);
		}
		i++;
	}
	if (c == '\0')
	{
		return (NULL);
	}
	return (occ);
}
// int main(){
// 	char d = 'f';
// 	char s[] = "fofifoo";
// 	printf("%s",ft_strrchr(s,d));
// }
