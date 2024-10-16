/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 02:24:26 by stakada           #+#    #+#             */
/*   Updated: 2024/10/16 13:22:13 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "init.h"

t_node	**create_list(char **strs, int is_onestr)
{
	t_node	**stack;
	t_node	*new_node;
	int		i;

	stack = (t_node **)malloc(sizeof(t_node *));
	if (!stack)
		return (NULL);
	*stack = NULL;
	i = 0;
	if (!is_onestr)
		i++;
	while (strs[i])
	{
		new_node = create_node();
		if (!new_node)
		{
			free_stack(stack);
			return (NULL);
		}
		add_node(stack, new_node);
		i++;
	}
	return (stack);
}

t_node	*create_node(void)
{
	t_node	*new_node;

	new_node = (t_node *)malloc(sizeof(t_node));
	if (!new_node)
		return (NULL);
	new_node->value = 0;
	new_node->rank = 0;
	new_node->next = NULL;
	return (new_node);
}

void	add_node(t_node **stack, t_node *new_node)
{
	t_node	*current;

	if (!*stack)
	{
		*stack = new_node;
		return ;
	}
	current = *stack;
	while (current->next)
		current = current->next;
	current->next = new_node;
}
