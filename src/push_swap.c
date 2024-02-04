/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsoteldo <gsoteldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 18:33:54 by gsoteldo          #+#    #+#             */
/*   Updated: 2024/02/04 20:00:45 by gsoteldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void ft_leaks(void)
{
	system("leaks push_swap");
}

void	push_swap(t_stack *stacks, int size_stack)
{
	is_ordered(stacks->list_a);
	if (size_stack == 1)
		return ;
	else if (size_stack == 2)
		swap_a(&stacks->list_a);
	else if (size_stack == 3)
		sort_3_numbers(&stacks->list_a);
	else if (size_stack == 4)
		sort_4_numbers(stacks);
	else
	{
		push_b(&stacks->list_a, &stacks->list_b);
		push_b(&stacks->list_a, &stacks->list_b);
		cheapest(stacks);
		sort_3_numbers(&stacks->list_a);
		moves_stack_a(stacks);
	}
}

int	main(int argc, char *argv[])
{
	t_stack	*stacks;
	int		size;

	//atexit(ft_leaks);
	stacks = (t_stack *)malloc(sizeof(t_stack));
	if (checker(argc, argv, stacks) == 0)
	{
		ft_printf("Error\n");
		return (0);
	}
	stacks->list_a = ft_new_a_list(argc, argv);
	stacks->list_b = NULL;
	size = stack_size(stacks->list_a);
	push_swap(stacks, size);
	free_stacks(stacks, 0, 0);
	return (0);
}
