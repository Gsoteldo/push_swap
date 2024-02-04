/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsoteldo <gsoteldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 17:08:32 by gsoteldo          #+#    #+#             */
/*   Updated: 2024/02/04 20:00:13 by gsoteldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void free_linked_list(t_linked_list *list)
{
	t_linked_list	*temp;

	while (list)
	{
		temp = list;
		list = list->next;
		free(temp);
	}
}

void	free_stacks(t_stack *stacks, int flag, int exit_flag)
{	
	free_linked_list(stacks->list_a);
	free_linked_list(stacks->list_b);
	free(stacks->moves);
	free(stacks->cheapest);
	free(stacks->value);
	free(stacks);
	if (flag == 1)
		ft_putstr_fd("Error\n", 2);
	if (exit_flag == 1)
		exit(0);
}
