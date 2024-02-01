/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_min_values.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsoteldo <gsoteldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 17:25:28 by gsoteldo          #+#    #+#             */
/*   Updated: 2024/02/01 19:03:12 by gsoteldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void is_max_a(t_stack *stacks, t_linked_list *stack_a)
{
	int				size_stack;
	int				i;


	i = 0;
	size_stack = stack_size(stack_a);
	stacks->value = (t_value *)malloc(sizeof(t_value));
	stacks->value->max_a = stack_a->content;
	while(i < size_stack)
	{
		if (stacks->value->max_a < stack_a->content)
			stacks->value->max_a = stack_a->content;
		stack_a = stack_a->next;
		i++;
	}
	ft_printf("stacks->value->max_a = %d\n", stacks->value->max_a);
}

static void is_min_a(t_stack *stacks, t_linked_list *stack_a)
{
	int				size_stack;
	int				i;
	
	i = 0;
	size_stack = stack_size(stacks->list_a);
	stacks->value->min_a = stack_a->content;
	while(i < size_stack)
	{
		if (stacks->value->min_a > stack_a->content)
			stacks->value->min_a = stack_a->content;
		stack_a = stack_a->next;
		i++;
	}
	ft_printf("stacks->value->min_appp = %d\n", stacks->value->min_a);
}

static void is_max_b(t_stack *stacks, t_linked_list *stack_b)
{
	int				size_stack;
	int				i;

	i = 0;
	size_stack = stack_size(stack_b);
	stacks->value->max_b = stack_b->content;
	while(i < size_stack)
	{
		if (stacks->value->max_b < stack_b->content)
			stacks->value->max_b = stack_b->content;
		stack_b = stack_b->next;
		i++;
	}
	ft_printf("stacks->value->max_b = %d\n", stacks->value->max_b);
}

static void is_min_b(t_stack *stacks, t_linked_list *stack_b)
{
	int				size_stack;
	int				i;

	i = 0;
	size_stack = stack_size(stack_b);
	stacks->value->min_b = stack_b->content;
	while(i < size_stack)
	{
		if (stacks->value->min_b > stack_b->content)
			stacks->value->min_b = stack_b->content;
		stack_b = stack_b->next;
		i++;
	}
	ft_printf("stacks->value->min_b = %d\n", stacks->value->min_b);
}

void is_max_min(t_stack *stacks)
{
	is_max_a(stacks, stacks->list_a);
	is_min_a(stacks, stacks->list_a);
	is_max_b(stacks, stacks->list_b);
	is_min_b(stacks, stacks->list_b);
}