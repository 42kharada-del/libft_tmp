/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharada <kharada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 16:20:31 by kharada           #+#    #+#             */
/*   Updated: 2026/04/30 17:00:06 by kharada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// t_list	*ft_lstnew(void *content)
// {
// 	t_list	*node;

// 	node = malloc(sizeof(t_list));
// 	if (!node)
// 		return (NULL);
// 	node->content = content;
// 	node->next = NULL;
// 	return (node);
// }

// void	ft_lstclear(t_list **lst, void (*del)(void *))
// {
// 	t_list	*current;
// 	t_list	*next;

// 	if (!lst || !del)
// 		return ;
// 	current = *lst;
// 	while (current != NULL)
// 	{
// 		next = current->next;
// 		del(current->content);
// 		free(current);
// 		current = next;
// 	}
// 	*lst = NULL;
// }

// void	ft_lstadd_back(t_list **lst, t_list *new)
// {
// 	t_list	*current;

// 	if (!lst || !new)
// 		return ;
// 	if (*lst == NULL)
// 	{
// 		*lst = new;
// 		return ;
// 	}
// 	current = *lst;
// 	while (current->next != NULL)
// 		current = current->next;
// 	current->next = new;
// }

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*new_content;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst != NULL)
	{
		new_content = f(lst->content);
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			del(new_content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

// static void	print_list(t_list *lst)
// {
// 	while (lst != NULL)
// 	{
// 		printf("%s", (char *)lst->content);
// 		if (lst->next != NULL)
// 			printf(" -> ");
// 		lst = lst->next;
// 	}
// 	printf("\n");
// }

// static void	*to_x(void *connect)
// {
// 	(void)connect;
// 	return ("X");
// }

// static void	del_none(void *connect)
// {
// 	(void)connect;
// }

// int	main(void)
// {
// 	t_list	a;
// 	t_list	b;
// 	t_list	c;
// 	t_list	*mapped;

// 	a.content = "A";
// 	a.next = &b;
// 	b.content = "B";
// 	b.next = &c;
// 	c.content = "C";
// 	c.next = NULL;
// 	printf("original : ");
// 	print_list(&a);
// 	mapped = ft_lstmap(&a, to_x, del_none);
// 	printf("mapped : ");
// 	print_list(mapped);
// 	ft_lstclear(&mapped, del_none);
// 	return (0);
// }
