/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnst.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzaanoun <mzaanoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:28:17 by mzaanoun          #+#    #+#             */
/*   Updated: 2024/10/28 14:59:50 by mzaanoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnst(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle == NULL)
		return ((char *)haystack);
	while (i < len && haystack[i])
	{
		j = 0;
		while (needle[j])
		{
			if (i + j < len && haystack [i + j] && haystack[i + j] == needle[j])
			{
				return ((char *)(haystack + i));
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
// int main()
// {
// 	char st1[] = "kolioliopa";
// 	char st2[] = "l";
// 	printf("%s",ft_strnst(st1,st2,7));
// }
