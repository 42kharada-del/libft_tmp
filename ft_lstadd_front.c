/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharada <kharada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 13:25:11 by kharada           #+#    #+#             */
/*   Updated: 2026/04/29 13:25:12 by kharada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

// static void	print_list(t_list *lst)
// {
// 	while (lst)
// 	{
// 		printf("%s", (char *)lst->content);
// 		if (lst->next)
// 			printf(" -> ");
// 		lst = lst->next;
// 	}
// 	printf("\n");
// }

// int	main(void)
// {
// 	t_list	*lst;
// 	t_list	a;
// 	t_list	b;
// 	t_list	c;

// 	lst = NULL;
// 	a.content = "A";
// 	a.next = NULL;
// 	b.content = "B";
// 	b.next = NULL;
// 	c.content = "C";
// 	c.next = NULL;
// 	ft_lstadd_front(&lst, &a);
// 	print_list(lst);
// 	ft_lstadd_front(&lst, &b);
// 	print_list(lst);
// 	ft_lstadd_front(&lst, &c);
// 	print_list(lst);
// 	return (0);
// }
