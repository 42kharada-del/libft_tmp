/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharada <kharada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 15:55:33 by kharada           #+#    #+#             */
/*   Updated: 2026/05/03 15:58:05 by kharada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

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
// 	t_list *node;
// 	char *s;

// 	s = ft_strdup("ABCD");
// 	if (!s)
// 		return (1);
// 	node = ft_lstnew(s);
// 	if (!node)
// 	{
// 		free(s);
// 		return (1);
// 	}
// 	ft_lstdelone(node, free);
// 	return (0);
// }
