/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3_numbers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsoteldo <gsoteldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 21:51:23 by gsoteldo          #+#    #+#             */
/*   Updated: 2024/01/13 22:37:01 by gsoteldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void sort_3_numbers(t_stack *stack_a)
{

	int	first_elem;
	int	second_elem;
	int	third_elem;

	first_elem = stack_a->content;
	second_elem = stack_a->next->content;
	third_elem = stack_a->next->next->content;

	show_stack(stack_a);

	//ft_printf("%d\n\n", third_elem);
	if ((first_elem > second_elem) && (second_elem < third_elem) && (first_elem < third_elem))
	{
		swap_a(&stack_a);
		show_stack(stack_a);
	}
}
