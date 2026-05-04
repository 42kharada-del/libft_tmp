/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharada <kharada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 15:45:18 by kharada           #+#    #+#             */
/*   Updated: 2026/04/30 15:51:09 by kharada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// void	print_content(void *content)
// {
// 	printf("%s\n", (char *)content);
// }

// int	main(void)
// {
// 	t_list	a;
// 	t_list	b;
// 	t_list	c;
// 	t_list	*lst;

// 	a.content = "A";
// 	a.next = &b;
// 	b.content = "B";
// 	b.next = &c;
// 	c.content = "C";
// 	c.next = NULL;
// 	lst = &a;
// 	ft_lstiter(lst, print_content);
// 	return (0);
// }
