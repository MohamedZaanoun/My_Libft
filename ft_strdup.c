/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzaanoun <mzaanoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:10:07 by mzaanoun          #+#    #+#             */
/*   Updated: 2024/10/28 20:57:26 by mzaanoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	j = 0;
	if (s1[0] == 0)
		return (0);
	while (s1[i])
	{
		i++;
	}
	str = malloc(i);
	ft_strlcpy(str, s1, i);
	return (str);
}
// 	int main()
// 	{
//     char source[] = "GeeksForGeeks";
//     char* target = ft_strdup(source);

//     printf("%s", target);
// 	printf("%s", source);
//     return 0;
// }
