/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabo <gabo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 18:33:54 by gsoteldo          #+#    #+#             */
/*   Updated: 2024/02/13 22:19:40 by gabo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	show_stack(t_linked_list *stack)
{
	t_linked_list	*temp;

	temp = stack;
	while (temp != NULL)
	{
		ft_printf("%d\n", temp->content);
		temp = temp->next;
	}
}

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

	stacks = (t_stack *)malloc(sizeof(t_stack));
	if(checker(argc, argv, stacks) == 0)
	{
		ft_printf("Error\n");
		return (0);
	}
	stacks->list_a = ft_new_a_list(argc, argv);
	stacks->list_b = NULL;
	size = stack_size(stacks->list_a);
	push_swap(stacks, size);
	//show_stack(stacks->list_a);
	free_stacks(stacks, 0);
	return (0);
}
