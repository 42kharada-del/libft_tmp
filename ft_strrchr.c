/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharada <kharada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 15:54:44 by kharada           #+#    #+#             */
/*   Updated: 2026/05/04 10:24:03 by kharada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	ch;
	char	*last;

	i = 0;
	ch = (char)c;
	last = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == ch)
			last = (char *)&s[i];
		i++;
	}
	if (ch == '\0')
		return ((char *)&s[i]);
	return (last);
}
