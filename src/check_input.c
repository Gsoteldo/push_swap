/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabo <gabo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:54:30 by gsoteldo          #+#    #+#             */
/*   Updated: 2024/02/02 13:27:59 by gabo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void is_max_int(char *str)
{
	if (ft_atoi(str) > 2147483647 || ft_atoi(str) <= -2147483648)
		free_stacks(NULL, 1);
	else
	{
		if (str[0] == '-')
		{
			if (ft_atoi(str) <= -2147483648)
				free_stacks(NULL, 1);
		}
		else
		{
			if (ft_atoi(str) > 2147483647)
				free_stacks(NULL, 1);
		}
	}
}

int is_repeated(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	if (argc == 2)
		i = 0;
	while (argv[i])
	{
		j = i + 1;
		while (argv[j])
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

static void comprobation(char **argv, t_stack *stacks, int *i)
{
	size_t j;

	j = 0;
	while (j < ft_strlen(argv[*i]))
	{
		if ((ft_isdigit(argv[*i][j]) == 0) && (argv[*i][j] != ' '))
		{
			
			if (argv[*i][j] != '-')
				free_stacks(stacks, 1);
		}
		else if (argv[*i][j] == ' ' && ft_isdigit(argv[*i][j + 1]) == ' ')
			free_stacks(stacks, 1);
		j++;
	}
}

int	checker(int argc, char **argv, t_stack *stacks)
{
	int					i;
	int					num;
	i = 1;
	num = 1;
	if (argc < 2)
		free_stacks(stacks, 0);
	while (i < argc)
	{
		is_max_int(argv[i]);
		if (argv[i][ft_strlen(argv[i]) - 1] == ' ' || argv[i][0] == ' ')
		comprobation(argv, stacks, &i);
		if(is_repeated(argc, argv) == 1)
		{
			num = 0;
			break ;
		}
		i++;
	}
	return (num);
}
