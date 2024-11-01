/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mestefan <mestefan@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 15:20:57 by mestefan          #+#    #+#             */
/*   Updated: 2024/07/20 15:21:30 by mestefan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (new == NULL)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

/*
#include <stdio.h>

int	main(void)
{
	// Test 1: Create a new node with integer content
	int content1 = 42;
	t_list *node1 = ft_lstnew(&content1);

	if (!node1)
	{
		printf(stderr, "Test 1 failed: Memory allocation error\n");
		return (1);
	}

	// Test 2: Create a new node with string content
	char *content2 = "Hello, world!";
	t_list *node2 = ft_lstnew(content2);

	if (!node2)
	{
		printf(stderr, "Test 2 failed: Memory allocation error\n");
		return (1);
	}

	// Print the contents of the nodes for verification
	printf("Test 1: %p -> %d\n", (void *)node1, *(int *)node1->content);
	printf("Test 2: %p -> %s\n", (void *)node2, (char *)node2->content);

	// Free the allocated memory
	free(node1);
	free(node2);

	return (0);
}
*/
