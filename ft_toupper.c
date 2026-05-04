/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharada <kharada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 10:49:24 by kharada           #+#    #+#             */
/*   Updated: 2026/04/27 13:50:31 by kharada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c + ('A' - 'a'));
	return (c);
}

// int	main(void)
// {
// 	printf("%c\n", ft_toupper('a'));
// 	printf("%c\n", ft_toupper('z'));
// 	printf("%c\n", ft_toupper('A'));
// 	printf("%c\n", ft_toupper('1'));
// 	printf("%c\n", ft_toupper(' '));
// 	return (0);
// }
