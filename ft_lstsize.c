/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharada <kharada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 14:03:51 by kharada           #+#    #+#             */
/*   Updated: 2026/04/29 14:21:14 by kharada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

// void	ft_lstadd_front(t_list **lst, t_list *new)
// {
// 	if (!lst || !new)
// 		return ;
// 	new->next = *lst;
// 	*lst = new;
// }

int	ft_lstsize(t_list *lst)
{
	int	i;

	if (!lst)
		return (0);
	i = 0;
	while (lst != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (i);
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
// 	int		i;

// 	lst = NULL;
// 	a.content = "A";
// 	a.next = NULL;
// 	b.content = "B";
// 	b.next = NULL;
// 	c.content = "C";
// 	c.next = NULL;
// 	ft_lstadd_front(&lst, &a);
// 	ft_lstadd_front(&lst, &b);
// 	ft_lstadd_front(&lst, &c);
// 	print_list(lst);
// 	i = ft_lstsize(lst);
// 	printf("lstsize = %d\n", i);
// 	return (0);
// }
