/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharada <kharada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 10:54:27 by kharada           #+#    #+#             */
/*   Updated: 2026/05/03 15:45:24 by kharada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <stdlib.h>

// size_t	ft_strlen(const char *s)
// {
// 	size_t	i;

// 	i = 0;
// 	while (s[i] != '\0')
// 		i++;
// 	return (i);
// }

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	size_t	i;
	size_t	len;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (i < len)
	{
		result[i] = f((unsigned int)i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

// char	map_toupper(unsigned int i, char c)
// {
// 	(void)i;
// 	if (c >= 'a' && c <= 'z')
// 		return (c + ('A' - 'a'));
// 	return (c);
// }

// int	main(void)
// {
// 	char	*s;
// 	char	*d;

// 	s = "abcdef";
// 	d = ft_strmapi(s, map_toupper);
// 	if (!d)
// 		return (1);
// 	printf("%s\n", d);
// 	free(d);
// 	return (0);
// }
