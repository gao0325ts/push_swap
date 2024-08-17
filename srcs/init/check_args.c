/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 15:17:36 by stakada           #+#    #+#             */
/*   Updated: 2024/08/18 01:03:46 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "init.h"

void	check_args(int ac, char **av)
{
	char **args;
	
	if (ac == 1)
		exit(0);
	if (!*av || !av)
		exit_with_error();
	if (ac != 2 &&(!is_digit_only(av) || !is_int(av)))
		exit_with_error();
	if (ac == 2)
	{
		args = ft_split(av[1], ' ');
		if (!is_digit_only_onestr(args) || !is_int_onestr(args))
			exit_with_error();
	}
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

bool	is_digit_only_onestr(char **args)
{
	int	i;
	int	j;

	i = 0;
	while (args[i])
	{
		j = 0;
		while (args[i][j])
		{
			if (args[i][j] == '-')
				j++;
			if (!ft_isdigit(args[i][j]))
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

bool	is_int_onestr(char **args)
{
	int			i;
	long long	num;

	i = 0;
	while (args[i])
	{
		num = ft_atoll(args[i]);
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
