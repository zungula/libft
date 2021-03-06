/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzungula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 10:54:43 by yzungula          #+#    #+#             */
/*   Updated: 2018/06/01 09:52:22 by yzungula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t destsize)
{
	size_t	dstlen;
	size_t	srclen;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (dstlen > destsize)
		return (srclen + destsize);
	if (dstlen < destsize)
	{
		ft_strncat(dst + dstlen, (char *)src, destsize - 1);
		dst[destsize - 1] = '\0';
	}
	return (dstlen + srclen);
}
