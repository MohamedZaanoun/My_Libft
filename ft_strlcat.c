/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzaanoun <mzaanoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 18:31:47 by mzaanoun          #+#    #+#             */
/*   Updated: 2024/10/26 12:55:50 by mzaanoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstleng;
	size_t	srcleng;
	size_t	i;
	size_t	spaceleft;

	i = 0;
	dstleng = ft_strlen(dst);
	srcleng = ft_strlen(src);
	if (dstleng >= dstsize)
		return (dstsize + srcleng);
	spaceleft = dstsize - dstleng -1;
	while (src[i] && (i < spaceleft))
	{
		dst[dstleng + i] = src[i];
		i++;
	}
	dst[dstleng + i] = '\0';
	return (dstleng + srcleng);
}
// int main(){
// 	char k[] = "kolala";
// 	char sr[] = "fafojiiubgvtyctycrtxertdtc";
// 	printf("%zu",ft_strlcat(k,sr,20));
// 	printf("%s",k);
// }
