/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_with_error.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 15:44:53 by stakada           #+#    #+#             */
/*   Updated: 2024/08/04 13:55:25 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "init.h"
#include "sort.h"

void	exit_with_error(void)
{
	ft_putendl_fd("Error", STDERR_FILENO);
	exit(1);
}

// // Test code
// int main()
// {
//     exit_with_error();
//     return (0);
// }