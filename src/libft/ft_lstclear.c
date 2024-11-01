/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mestefan <mestefan@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 15:05:28 by mestefan          #+#    #+#             */
/*   Updated: 2024/07/20 15:05:32 by mestefan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next_node;
	t_list	*current;

	if (lst == NULL || *lst == NULL || del == NULL)
		return ;
	current = *lst;
	while (current != NULL)
	{
		next_node = current->next;
		ft_lstdelone(current, del);
		current = next_node;
	}
	*lst = NULL;
}

/*
#include <stdio.h>

void	print_list(t_list *lst)
{
	t_list	*current;

	current = lst;
	while (current)
	{
		printf("%p -> %s\n", (void *)current, (char *)(current->content));
		current = current->next;
	}
	printf("NULL\n");
}

int	main(void)
{
	t_list *lst = NULL;

	t_list *node1 = ft_lstnew(ft_strdup("ONE"));
	t_list *node2 = ft_lstnew(ft_strdup("TWO"));
	t_list *node3 = ft_lstnew(ft_strdup("THREE"));

	ft_lstadd_back(&lst, node1);
	ft_lstadd_back(&lst, node2);
	ft_lstadd_back(&lst, node3);

	printf("Before deletion:\n");
	print_list(lst);

	ft_lstclear(&lst, free);

	printf("\nAfter deletion:\n");
	print_list(lst);

	return (0);
}
*/
