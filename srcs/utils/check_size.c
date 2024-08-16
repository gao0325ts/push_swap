/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_size.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 13:52:24 by stakada           #+#    #+#             */
/*   Updated: 2024/08/17 07:38:26 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort.h"

int	check_size(t_stack **stack_a)
{
	int		size;
	t_stack	*temp;

	// if (!*stack_a)
	// 	return (0);
	size = 0;
	temp = *stack_a;
	while (temp)
	{
		size++;
		temp = temp->next;
	}
	return (size);
}
