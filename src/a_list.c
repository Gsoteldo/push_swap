/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_list.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsoteldo <gsoteldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 19:33:08 by gsoteldo          #+#    #+#             */
/*   Updated: 2024/01/09 21:31:26 by gsoteldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_stack_a	*ft_new_a_node(int content)
{
	t_stack_a	*ptr;

	ptr = (t_stack_a *)malloc(sizeof(t_stack_a));
	if (ptr == 0)
		return (0);
	ptr->content = content;
	ptr->next = 0;
	return (ptr);
}

t_stack_a	*ft_new_a_list(int argc, char **argv)
{
	int			i;
	t_stack_a	*ptr;
	t_stack_a	*tmp;

	i = 1;
	ptr = ft_new_a_node(ft_atoi(argv[i]));
	tmp = ptr;
	while (++i < argc)
	{
		tmp->next =  ft_new_a_node(ft_atoi(argv[i]));
		tmp = tmp->next;
		tmp->next = NULL;
	}

	
	return (ptr);
}