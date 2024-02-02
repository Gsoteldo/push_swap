/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabo <gabo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 17:32:46 by gsoteldo          #+#    #+#             */
/*   Updated: 2024/02/02 12:02:21 by gabo             ###   ########.fr       */
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
	t_linked_list *temp;
	int i;

	i = 0;
	temp = stack;
	while (i < stack_size(stack))
	{
		if (temp->content == value)
		{
			//ft_printf("find_index = %d\n", i);
			return (i);
		}
		temp = temp->next;
		i++;
	}
	return (-1);
}

int search_number(t_linked_list *stack, int value)
{
	t_linked_list *temp;
	int flag;
	int i;

	i = 0;
	flag = 0;
	temp =stack;
	while (flag == 0)
	{
		i = 0;
		temp = stack;
		value++;
		while (i++ < stack_size(stack))
		{
			if (temp->content == value)
				flag = 1;
			temp = temp->next;
		}
	}
	return (value);
}

t_linked_list	*ft_last(t_linked_list *stack)
{
	if (stack == 0)
		return (0);
	while (stack->next != 0)
		stack = stack->next;
	return (stack);
}
