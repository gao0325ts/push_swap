/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 15:17:36 by stakada           #+#    #+#             */
/*   Updated: 2024/08/19 14:23:32 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "init.h"

// TODO 引数に空のものが含まれているときErrorにする

void	check_args(int ac, char **av)
{
	char **args;
	
	if (ac == 1)
		exit(0);
	if (is_empty(av))
		exit_with_error();
	if (ac != 2 &&(!is_digit_only(av) || !is_int(av)))
		exit_with_error();
	if (ac == 2)
	{
		args = ft_split(av[1], ' ');
		if (!args || !is_digit_only_onestr(args) || !is_int_onestr(args))
			exit_with_error();
	}
}

bool is_empty(char **av)
{
	int i;

	i = 1;
	while (av[i])
	{
		if (av[i][0] == '\0')
			return (true);
		i++;
	}
	return (false);
}

bool	is_digit_only(char **av)
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
				return (false);
			j++;
		}
		i++;
	}
	return (true);
}

bool	is_int(char **av)
{
	int			i;
	long long	num;

	i = 1;
	while (av[i])
	{
		num = ft_atoll(av[i]);
		if (num > INT_MAX || num < INT_MIN)
			return (false);
		i++;
	}
	return (true);
}

// int main(int ac, char **av)
// {
// 	check_args(ac, av);
// 	return (0);
// }
