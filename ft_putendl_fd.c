/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharada <kharada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 15:10:21 by kharada           #+#    #+#             */
/*   Updated: 2026/04/27 15:19:03 by kharada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <unistd.h>

// void	ft_putchar_fd(char c, int fd)
// {
// 	write(fd, &c, 1);
// }

// void	ft_putstr_fd(char *s, int fd)
// {
// 	if (!s)
// 		return ;
// 	while (s[i] != '\0')
// 	{
// 		ft_putchar_fd(s[i], fd);
// 		i++;
// 	}
// }

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

// int	main(void)
// {
// 	char	*s;

// 	s = "abcdefg";
// 	ft_putendl_fd(s, 1);
// 	return (0);
// }
