/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_4_numbers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabo <gabo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 17:43:34 by gsoteldo          #+#    #+#             */
/*   Updated: 2024/02/03 13:10:10 by gabo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void sort_4_numbers(t_stack *stacks)
{


	stacks->moves = (t_moves *)malloc(sizeof(t_moves));
	stacks->cheapest = (t_moves *)malloc(sizeof(t_moves));
	stacks->value = (t_value *)malloc(sizeof(t_value));
	push_b(&stacks->list_a, &stacks->list_b);
	sort_3_numbers(&stacks->list_a);
	moves_stack_a(stacks);
	free_stacks(stacks, 0);
	exit(0);
}