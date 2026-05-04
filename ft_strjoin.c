/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharada <kharada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 17:01:15 by kharada           #+#    #+#             */
/*   Updated: 2026/05/04 11:22:21 by kharada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1len;
	size_t	s2len;
	char	*dst;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	dst = malloc(sizeof(char) * (s1len + s2len + 1));
	if (!dst)
		return (NULL);
	ft_strlcpy(dst, s1, s1len + s2len + 1);
	ft_strlcat(dst, s2, s1len + s2len + 1);
	return (dst);
}
