/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsoteldo <gsoteldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 18:33:54 by gsoteldo          #+#    #+#             */
/*   Updated: 2024/01/09 20:04:38 by gsoteldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	free_stacks(t_stack *stack_a, t_stack *stack_b, int flag)
{
	free(stack_a);
	free(stack_b);
	if (flag == 1)
		ft_printf("Error\n");
	exit(0);
}

void	checker(int argc, char **argv, t_stack *stack_a, t_stack *stack_b)
{
	int					i;
	long unsigned int	j;

	i = 1;
	j = 0;
	if (argc < 2)
		free_stacks(stack_a, stack_b, 0);
	while (i < argc)
	{
		if (argv[i][ft_strlen(argv[i]) - 1] == ' ' || argv[i][0] == ' ')
			free_stacks(stack_a, stack_b, 0);
		while (j < ft_strlen(argv[i]))
		{
			if ((ft_isdigit(argv[i][j]) == 0) && (argv[i][j] != ' '))
			{
				if (argv[i][j] != '-')
					free_stacks(stack_a, stack_b, 1);
			}
			if (argv[i][j] == ' ' && ft_isdigit(argv[i][j + 1]) == ' ')
				free_stacks(stack_a, stack_b, 1);
			j++;
		}
		i++;
	}
}

int	stack_size(int argc, char **argv)
{
	int	i;
	int	size;

	size = 0;
	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
		{
			if (argv[1][i] == ' ')
				size++;
			i++;
		}
		size++;
	}
	else
		size = argc - 1;
	return (size);
}

int	main(int argc, char *argv[])
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		size;

	stack_a = NULL;
	stack_b = NULL;
	checker(argc, argv, stack_a, stack_b);
	size = stack_size(argc, argv);
	stack_a = ft_new_a_list(argc, argv);
	show_stack(stack_a);
	ft_printf("size = %d\n", size);
	return (0);
}
