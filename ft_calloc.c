/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzaanoun <mzaanoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:01:38 by mzaanoun          #+#    #+#             */
/*   Updated: 2024/10/29 16:16:24 by mzaanoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*temp;
	size_t			i;
	size_t			t;

	i = 0;
	t = count * size;
	if (size && t / size != count)
		return (NULL);
	temp = malloc (count * sizeof(size));
	if (!temp)
		return (NULL);
	while (temp[i])
	{
		temp[i] = '0';
		i++;
	}
	return (temp);
}
// int main(){
// 	printf("%s\n this is ft_calloc :",ft_calloc(4,3));
// 	printf("%s\n this is calloc :",calloc(4,3));
// }
