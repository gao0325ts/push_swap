/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 15:17:36 by stakada           #+#    #+#             */
/*   Updated: 2024/08/19 15:28:25 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "init.h"

void	check_args(int ac, char **av)
{
	char	**args;

	if (ac == 1)
		exit(0);
	if (has_empty_args(av))
		exit_with_error();
	if (ac == 2)
	{
		args = ft_split(av[1], ' ');
		if (!args || !args[0] || !are_digits_only_onestr(args)
			|| !are_valid_int_onestr(args))
			exit_with_error();
	}
	else
	{
		if (!are_digits_only(av) || !are_valid_int(av))
			exit_with_error();
	}
}

bool	has_empty_args(char **av)
{
	int	i;

	i = 1;
	while (av[i])
	{
		if (av[i][0] == '\0')
			return (true);
		i++;
	}
	return (false);
}

bool	are_digits_only(char **av)
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

bool	are_valid_int(char **av)
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
