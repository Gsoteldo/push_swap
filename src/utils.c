/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsoteldo <gsoteldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 17:32:46 by gsoteldo          #+#    #+#             */
/*   Updated: 2024/02/01 18:45:10 by gsoteldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	free_stacks(t_stack *stacks, int flag)
{
	free(stacks->list_a);
	free(stacks->list_b);
	free(stacks->moves);
	free(stacks->cheapest);
	free(stacks->value);
	free(stacks);
	if (flag == 1)
		ft_printf("Error\n");
	exit(0);
}

void is_ordered(t_linked_list *stack_a)
{
	t_linked_list *temp;

	temp = stack_a;
	while (temp->next != NULL)
	{
		if (temp->content > temp->next->content)
			return ;
		temp = temp->next;
	}
	ft_printf("Stack a is ordered\n");
	exit(0);
}

int find_index(t_linked_list *stack, int value)
{
	int i;

	i = 0;
	while (i < stack_size(stack))
	{
		if (stack->content == value)
		{
			ft_printf("find_index = %d\n", i);
			return (i);
		}
		stack = stack->next;
		i++;
	}
	return (-1);
}

int search_number(t_stack *stack, int value)
{
	t_linked_list *temp;
	int flag;
	int i;
	int last_element;

	i = 0;
	flag = 0;
	temp = stack->list_a;
	while (temp->next != NULL)
	{
		temp = temp->next;
		last_element = temp->content;
	}
	while (flag == 0 && value <= last_element)
	{
		temp = stack->list_a;
		value++;
		while (i++ < stack_size(stack->list_a))
		{
			if (temp->content == value)
				return (1);
			temp = temp->next;
		}
	}
	return (0);
}
