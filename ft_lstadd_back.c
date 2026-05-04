/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharada <kharada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 16:29:02 by kharada           #+#    #+#             */
/*   Updated: 2026/04/29 16:31:24 by kharada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	current = *lst;
	while (current->next != NULL)
		current = current->next;
	current->next = new;
}

// static void print_list(t_list *lst)
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

// int main(void)
// {
// 	t_list a;
// 	t_list b;
// 	t_list c;
// 	t_list d;
// 	t_list *lst;

// 	a.content = "A";
// 	a.next = &b;
// 	b.content = "B";
// 	b.next = &c;
// 	c.content = "C";
// 	c.next = NULL;

// 	d.content = "D";
// 	d.next = NULL;

// 	lst = &a;
// 	ft_lstadd_back(&lst, &d);
// 	print_list(lst);
// 	return (0);
// }
