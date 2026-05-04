/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharada <kharada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 13:25:49 by kharada           #+#    #+#             */
/*   Updated: 2026/04/29 13:25:50 by kharada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

// int	main(void)
// {
// 	t_list	*node;
// 	char	*str;
// 	int		num;

// 	str = "hello";
// 	node = ft_lstnew(str);
// 	if (!node)
// 		return (1);
// 	printf("=== string test ===\n");
// 	printf("content: %s\n", (char *)node->content);
// 	printf("next   : %p\n", (void *)node->next);
// 	free(node);
// 	num = 42;
// 	node = ft_lstnew(&num);
// 	if (!node)
// 		return (1);
// 	printf("=== int test ===\n");
// 	printf("content: %d\n", *(int *)node->content);
// 	printf("next   : %p\n", (void *)node->next);
// 	free(node);
// 	node = ft_lstnew(NULL);
// 	if (!node)
// 		return (1);
// 	printf("=== NULL content test ===\n");
// 	printf("content: %p\n", node->content);
// 	printf("next   : %p\n", (void *)node->next);
// 	free(node);
// 	return (0);
// }
