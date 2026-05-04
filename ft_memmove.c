/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharada <kharada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 15:34:45 by kharada           #+#    #+#             */
/*   Updated: 2026/05/04 09:53:54 by kharada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dst;
	const unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	dst = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (dst == s || n == 0)
		return (dest);
	if (dst < s)
		return (ft_memcpy(dest, src, n));
	while (n > 0)
	{
		n--;
		dst[n] = s[n];
	}
	return (dest);
}
