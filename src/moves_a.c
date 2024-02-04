/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsoteldo <gsoteldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:02:30 by gsoteldo          #+#    #+#             */
/*   Updated: 2024/02/02 17:42:31 by gsoteldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	moves(t_stack *stacks)
{
	while (stacks->moves->ra-- != 0)
		rotate_a(&stacks->list_a);
	while (stacks->moves->rra-- != 0)
		r_rotate_a(&stacks->list_a);
}

void	new_order_min_stack(t_stack *stacks, char flag)
{
	int	index;

	stacks->moves->ra = 0;
	stacks->moves->rra = 0;
	index = find_index(stacks->list_a, stacks->value->min_a);
	if (stacks->list_a->content != stacks->value->min_a)
	{
		if (stack_size(stacks->list_a) % 2 == 0)
		{
			if (index + 1 > stack_size(stacks->list_a) / 2)
				stacks->moves->rra = stack_size(stacks->list_a) - index;
			else
				stacks->moves->ra = index;
		}
		else
		{
			if (index > stack_size(stacks->list_a) / 2)
				stacks->moves->rra = stack_size(stacks->list_a) - index;
			else
				stacks->moves->ra = index;
		}
	}
	moves(stacks);
	if (flag == 1)
		push_a(&stacks->list_a, &stacks->list_b);
}

void	new_order_max_stack(t_stack *stacks)
{
	int	index;

	stacks->moves->ra = 0;
	stacks->moves->rra = 0;
	index = find_index(stacks->list_a, stacks->value->max_a);
	if (ft_last(stacks->list_a)->content != stacks->value->max_a)
	{
		if (stack_size(stacks->list_a) % 2 == 0)
		{
			if (index + 1 > stack_size(stacks->list_a) / 2)
				stacks->moves->rra = (stack_size(stacks->list_a) - index) - 1;
			else
				stacks->moves->ra = index + 1;
		}
		else
		{
			if (index > stack_size(stacks->list_a) / 2)
				stacks->moves->rra = (stack_size(stacks->list_a) - index) - 1;
			else
				stacks->moves->ra = index + 1;
		}
	}
	moves(stacks);
	push_a(&stacks->list_a, &stacks->list_b);
	rotate_a(&stacks->list_a);
}

void	new_elem_in_a(t_stack *stacks)
{
	int	index;
	int	search;

	stacks->moves->ra = 0;
	stacks->moves->rra = 0;
	search = search_number(stacks->list_a, stacks->list_b->content);
	index = find_index(stacks->list_a, search);
	if (stacks->list_a->content != search)
	{
		if (stack_size(stacks->list_a) % 2 == 0)
		{
			if (index + 1 > stack_size(stacks->list_a) / 2)
				stacks->moves->rra = (stack_size(stacks->list_a) - index);
			else
				stacks->moves->ra = index;
		}
		else
		{
			if (index > stack_size(stacks->list_a) / 2)
				stacks->moves->rra = stack_size(stacks->list_a) - index;
			else
				stacks->moves->ra = index;
		}
	}
	moves(stacks);
}

void	moves_stack_a(t_stack *stacks)
{
	while (stacks->list_b != 0)
	{
		is_max_min(stacks, 1);
		if (stacks->list_b->content < stacks->value->min_a)
			new_order_min_stack(stacks, 1);
		else if (stacks->list_b->content > stacks->value->max_a)
			new_order_max_stack(stacks);
		else
		{
			new_elem_in_a(stacks);
			push_a(&stacks->list_a, &stacks->list_b);
		}
	}
	is_max_min(stacks, 0);
	new_order_min_stack(stacks, 0);
}
