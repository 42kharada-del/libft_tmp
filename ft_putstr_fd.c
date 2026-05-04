/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharada <kharada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 14:03:01 by kharada           #+#    #+#             */
/*   Updated: 2026/04/27 14:56:39 by kharada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

// void	ft_putchar_fd(char c, int fd)
// {
// 	write(fd, &c, 1);
// }

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	if (!s)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}

// int	main(void)
// {
// 	char	*s;

// 	s = "abcdef";
// 	ft_putstr_fd(s, 1);
// 	ft_putchar_fd('\n', 1);
// 	return (0);
// }
