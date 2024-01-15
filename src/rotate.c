/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsoteldo <gsoteldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 21:59:32 by gsoteldo          #+#    #+#             */
/*   Updated: 2024/01/13 21:59:39 by gsoteldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	rotate(t_stack **stack)
{
	t_stack	*temp;
	t_stack	*temp2;

	if (stack == NULL)
		return ;
	temp = *stack;
	temp2 = *stack;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = temp2;
	*stack = temp2->next;
	temp2->next = NULL;
}

void	rotate_a(t_stack **stack_a)
{
	rotate(stack_a);
	ft_printf("ra\n");
}

void	rotate_b(t_stack **stack_b)
{
	rotate(stack_b);
	ft_printf("rb\n");
}

void	rotate_ab(t_stack **stack_a, t_stack **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
	ft_printf("rr\n");
}
