/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 02:24:26 by stakada           #+#    #+#             */
/*   Updated: 2024/08/04 15:38:38 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "init.h"

static t_stack	*create_node_a(char *arg);
static void		add_node_a(t_stack **list_a, t_stack *new_node);

t_stack	**init_a(int ac, char **av)
{
	t_stack	**list_a;
	t_stack	*new_node;
	int		i;

	list_a = (t_stack **)malloc(sizeof(t_stack *));
	if (!list_a)
		return (NULL);
	*list_a = NULL;
	i = 1;
	while (i < ac)
	{
		new_node = create_node_a(av[i]);
		if (!new_node)
		{
			clear_nodes(list_a);
			free(list_a);
			return (NULL);
		}
		add_node_a(list_a, new_node);
		i++;
	}
	return (list_a);
}

static t_stack	*create_node_a(char *arg)
{
	t_stack	*new_node;

	new_node = (t_stack *)malloc(sizeof(t_stack));
	if (!new_node)
		return (NULL);
	new_node->number = ft_atoi(arg);
	new_node->coord = 0;
	new_node->next = NULL;
	return (new_node);
}

static void	add_node_a(t_stack **list_a, t_stack *new_node)
{
	t_stack	*current;

	if (!*list_a)
	{
		*list_a = new_node;
		return ;
	}
	current = *list_a;
	while (current->next)
		current = current->next;
	current->next = new_node;
}

// // Test code
// #include <stdio.h>
// int main(int ac, char **av)
// {
// 	t_stack **list_a = init_a(ac, av);
// 	t_stack *current = *list_a;

// 	while (current)
// 	{
// 		printf("number: %d, coord: %d\n", current->number, current->coord);
// 		current = current->next;
// 	}
// 	clear_stack(list_a);
// 	free(list_a);
// 	return (0);
// }