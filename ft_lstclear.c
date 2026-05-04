/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharada <kharada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 15:56:06 by kharada           #+#    #+#             */
/*   Updated: 2026/05/03 15:57:40 by kharada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next;

	if (!lst || !del)
		return ;
	current = *lst;
	while (current != NULL)
	{
		next = current->next;
		del(current->content);
		free(current);
		current = next;
	}
	*lst = NULL;
}

// static void print_list(t_list *lst)
// {
// 	while(lst != NULL)
// 	{
// 		printf("%s", (char *)lst->content);
// 		if (lst->next)
// 			printf(" -> ");
// 		lst = lst->next;
// 	}
// 	printf("\n");
// }

// size_t	ft_strlen(const char *s)
// {
// 	size_t	i;

// 	i = 0;
// 	while (s[i] != '\0')
// 		i++;
// 	return (i);
// }

// char	*ft_strdup(const char *s)
// {
// 	size_t	i;
// 	size_t	slen;
// 	char	*d;

// 	slen = ft_strlen(s);
// 	d = malloc(sizeof(char) * (slen + 1));
// 	if (!d)
// 		return (NULL);
// 	i = 0;
// 	while (i < slen)
// 	{
// 		d[i] = s[i];
// 		i++;
// 	}
// 	d[i] = '\0';
// 	return (d);
// }

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

// int main(void)
// {
// 	t_list *a;
// 	t_list *b;
// 	t_list *c;
// 	t_list *lst;

// 	a = ft_lstnew(ft_strdup("A"));
// 	b = ft_lstnew(ft_strdup("B"));
// 	c = ft_lstnew(ft_strdup("C"));
// 	if (!a || !b || !c)
// 		return (1);
// 	a->next = b;
// 	b->next = c;
// 	lst = a;
// 	print_list(lst);
// 	ft_lstclear(&a->next, free);
// 	print_list(lst);
// 	ft_lstclear(&lst, free);
// 	return (0);
// }
