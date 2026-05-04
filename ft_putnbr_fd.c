/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharada <kharada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 17:20:56 by kharada           #+#    #+#             */
/*   Updated: 2026/04/27 17:22:14 by kharada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <stdlib.h>
// #include <unistd.h>

// static int	count_len(int n)
// {
// 	long	nb;
// 	int		len;

// 	nb = n;
// 	len = 0;
// 	if (nb == 0)
// 		return (1);
// 	if (nb < 0)
// 	{
// 		len++;
// 		nb = -nb;
// 	}
// 	while (nb > 0)
// 	{
// 		nb = nb / 10;
// 		len++;
// 	}
// 	return (len);
// }

// char	*ft_itoa(int n)
// {
// 	long	nb;
// 	char	*s;
// 	size_t	len;

// 	nb = n;
// 	len = count_len(n);
// 	s = malloc(sizeof(char) * (len + 1));
// 	if (!s)
// 		return (NULL);
// 	s[len] = '\0';
// 	if (nb == 0)
// 		s[0] = '0';
// 	if (nb < 0)
// 	{
// 		s[0] = '-';
// 		nb = -nb;
// 	}
// 	while (nb > 0)
// 	{
// 		s[--len] = (char)(nb % 10) + '0';
// 		nb = nb / 10;
// 	}
// 	return (s);
// }

// void	ft_putchar_fd(char c, int fd)
// {
// 	write(fd, &c, 1);
// }

// void	ft_putstr_fd(char *s, int fd)
// {
// 	size_t	i;

// 	if (!s)
// 		return ;
// 	i = 0;
// 	while (s[i] != '\0')
// 	{
// 		ft_putchar_fd(s[i], fd);
// 		i++;
// 	}
// }

void	ft_putnbr_fd(int n, int fd)
{
	char	*s;

	s = ft_itoa(n);
	if (!s)
		return ;
	ft_putstr_fd(s, fd);
	free(s);
}

// int	main(void)
// {
// 	int	n;

// 	n = -2147483648;
// 	ft_putnbr_fd(n, 1);
// 	printf("\n");
// 	printf("%d\n", n);
// 	return (0);
// }
