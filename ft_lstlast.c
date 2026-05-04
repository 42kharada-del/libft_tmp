/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharada <kharada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 15:08:06 by kharada           #+#    #+#             */
/*   Updated: 2026/04/29 15:08:51 by kharada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

// int	main(void)
// {
// 	t_list	a;
// 	t_list	b;
// 	t_list	c;
// 	t_list	*last;

// 	last = ft_lstlast(NULL);
// 	if (last == NULL)
// 		printf("NULL test OK\n");
// 	a.content = "A";
// 	a.next = &b;
// 	b.content = "B";
// 	b.next = &c;
// 	c.content = "C";
// 	c.next = NULL;
// 	last = ft_lstlast(&a);
// 	printf("%s\n", (char *)last->content);
// 	return (0);
// }
