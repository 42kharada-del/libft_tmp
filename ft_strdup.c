/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharada <kharada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 14:53:59 by kharada           #+#    #+#             */
/*   Updated: 2026/05/04 11:11:14 by kharada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	size_t	slen;
	char	*d;

	slen = ft_strlen(s);
	d = malloc(sizeof(char) * (slen + 1));
	if (!d)
		return (NULL);
	i = 0;
	while (i < slen)
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}
