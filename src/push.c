/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsoteldo <gsoteldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 21:51:29 by gsoteldo          #+#    #+#             */
/*   Updated: 2024/01/27 20:23:57 by gsoteldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	push(t_linked_list **source, t_linked_list **destiny)
{
	t_linked_list	*temp;

	if (source == NULL)
		return ;
	temp = (*source)->next;
	(*source)->next = *destiny;
	*destiny = *source;
	*source = temp;
}

void	push_a(t_linked_list **stack_a, t_linked_list **stack_b)
{
	push(stack_b, stack_a);
	ft_printf("pa\n");
}

void	push_b(t_linked_list **stack_a, t_linked_list **stack_b)
{
	push(stack_a, stack_b);
	ft_printf("pb\n");
}
