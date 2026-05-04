/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharada <kharada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 15:55:43 by kharada           #+#    #+#             */
/*   Updated: 2026/04/27 17:17:11 by kharada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdlib.h>
// #include <stdio.h>

static int	count_len(int n)
{
	long	nb;
	int		len;

	nb = n;
	len = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		len++;
		nb = -nb;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	nb;
	char	*s;
	size_t	len;

	nb = n;
	len = count_len(n);
	s = malloc(sizeof(char) * (len + 1));
	if (!s)
		return (NULL);
	s[len] = '\0';
	if (nb == 0)
		s[0] = '0';
	if (nb < 0)
	{
		s[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		s[--len] = (char)(nb % 10) + '0';
		nb = nb / 10;
	}
	return (s);
}

// int	main(void)
// {
// 	int		n1;
// 	int		n2;
// 	char	*s1;
// 	char	*s2;

// 	n1 = 123456;
// 	n2 = -123456;
// 	s1 = ft_itoa(n1);
// 	s2 = ft_itoa(n2);
// 	printf("%s\n", s1);
// 	printf("%s\n", s2);
// 	return (0);
// }
