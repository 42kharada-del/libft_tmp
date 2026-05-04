/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharada <kharada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 15:13:24 by kharada           #+#    #+#             */
/*   Updated: 2026/05/04 09:30:18 by kharada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dst;
	const unsigned char	*s;

	i = 0;
	dst = (unsigned char *)dest;
	s = (const unsigned char *)src;
	while (i < n)
	{
		dst[i] = s[i];
		i++;
	}
	return (dest);
}
