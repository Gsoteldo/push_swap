/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsoteldo <gsoteldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 18:33:54 by gsoteldo          #+#    #+#             */
/*   Updated: 2024/02/01 19:04:36 by gsoteldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void push_swap(t_stack *stacks, int size_stack)
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
	
	//free_stacks(stacks, 0);
		
}

int	main(int argc, char *argv[])
{
	t_stack	*stacks;
	int		size;

	stacks = (t_stack *)malloc(sizeof(t_stack));
	if(checker(argc, argv, stacks) == 0)
	{
		ft_printf("Error\n");
		return (0);
	}
	stacks->list_a = ft_new_a_list(argc, argv);
	stacks->list_b = NULL;
	size = stack_size(stacks->list_a);

	show_stack(stacks->list_a);
	push_swap(stacks, size);
	printf("push_swap passed\n");
	//push_b(&stacks->list_a, &stacks->list_b);
	ft_printf("size = %d\n", size);
	ft_printf("Numeros ordenados: \n");

	ft_printf("Stack a:\n");
	show_stack(stacks->list_a);
	ft_printf("Stack b:\n");
	show_stack(stacks->list_b);
	//find_index(stacks->list_a, 2);
	//is_max_min(stacks);
	//free_stacks(stacks, 0);

	/*
	push_b(&stack_a, &stack_b);
	push_b(&stack_a, &stack_b);
	show_stacks(stack_a, stack_b);
	rotate_ab(&stack_a, &stack_b);
	show_stacks(stack_a, stack_b);
	swap_a(&stack_a);
	show_stacks(stack_a, stack_b);
	push_a(&stack_a, &stack_b);
	show_stacks(stack_a, stack_b);
	reverse_rotate_a(&stack_a);
	show_stacks(stack_a, stack_b);
	push_a(&stack_a, &stack_b);
	show_stacks(stack_a, stack_b);
	rotate_a(&stack_a);
	rotate_a(&stack_a);
	show_stacks(stack_a, stack_b);*/

	/*
	ft_printf("\n");
	show_stacks(stack_a, stack_b);
	ft_printf("------------------\n");
	swap_a(&stack_a);
	show_stacks(stack_a, stack_b);
	ft_printf("\n");
	show_stacks(stack_a, stack_b);
	ft_printf("------------------\n");
	push_a(&stack_a, &stack_b);
	show_stacks(stack_a, stack_b);
	ft_printf("-------------------\n");
	rotate_a(&stack_a);
	show_stacks(stack_a, stack_b);
	ft_printf("-------------------\n");
	reverse_rotate_a(&stack_a);
	show_stacks(stack_a, stack_b);
	reverse_rotate_a(&stack_a);
	show_stacks(stack_a, stack_b);
	*/

	//free_stacks(stack_a, stack_b, 0);
	return (0);
}
