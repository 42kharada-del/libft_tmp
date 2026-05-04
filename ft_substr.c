/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharada <kharada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 16:18:05 by kharada           #+#    #+#             */
/*   Updated: 2026/05/04 11:18:18 by kharada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t max_len)
{
	size_t	slen;
	size_t	sub_len;
	char	*dst;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if ((size_t)start >= slen)
		return (ft_strdup(""));
	if (max_len > slen - start)
		sub_len = slen - start;
	else
		sub_len = max_len;
	dst = malloc(sizeof(char) * (sub_len + 1));
	if (!dst)
		return (NULL);
	ft_strlcpy(dst, s + start, sub_len + 1);
	return (dst);
}
