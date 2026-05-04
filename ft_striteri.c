/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharada <kharada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 12:09:49 by kharada           #+#    #+#             */
/*   Updated: 2026/04/27 12:14:42 by kharada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f((unsigned int)i, &s[i]);
		i++;
	}
}

// void	map_toupper(unsigned int i, char *c)
// {
// 	(void)i;
// 	if (*c >= 'a' && *c <= 'z')
// 		*c = *c + ('A' - 'a');
// }

// int	main(void)
// {
// 	char	s[] = "abcdefg";

// 	ft_striteri(s, map_toupper);
// 	printf("%s\n", s);
// 	return (0);
// }
