/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsoteldo <gsoteldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 21:59:26 by gsoteldo          #+#    #+#             */
/*   Updated: 2024/01/13 21:59:40 by gsoteldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	swap(t_stack **stack)
{
	t_stack	*temp;

	if (stack == NULL)
		return ;
	temp = (*stack)->next;
	(*stack)->next = temp->next;
	temp->next = *stack;
	*stack = temp;
}

void	swap_a(t_stack **stack_a)
{
	swap(stack_a);
	ft_printf("sa\n");
}

void	swap_b(t_stack **stack_b)
{
	swap(stack_b);
	ft_printf("sb\n");
}

void	swap_ab(t_stack **stack_a, t_stack **stack_b)
{
	swap(stack_a);
	swap(stack_b);
	ft_printf("ss\n");
}
