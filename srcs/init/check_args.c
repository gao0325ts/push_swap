/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 15:17:36 by stakada           #+#    #+#             */
/*   Updated: 2024/08/04 14:05:04 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "init.h"

void	check_args(int ac, char **av)
{
	if (ac == 1)
		exit(0);
	if (ac == 2)
		exit_with_error();
	is_digit_only(av);
	is_int(av);
}

void	is_digit_only(char **av)
{
	int	i;
	int	j;

	i = 1;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			if (av[i][j] == '-')
				j++;
			if (!ft_isdigit(av[i][j]))
				exit_with_error();
			j++;
		}
		i++;
	}
}

void	is_int(char **av)
{
	int			i;
	long long	num;

	i = 1;
	while (av[i])
	{
		num = ft_atoll(av[i]);
		if (num > INT_MAX || num < INT_MIN)
			exit_with_error();
		i++;
	}
}

// // // Test code
// int main(int ac, char **av)
// {
// 	check_args(ac, av);
// 	return (0);
// }
