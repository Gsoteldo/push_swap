/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsoteldo <gsoteldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 19:33:08 by gsoteldo          #+#    #+#             */
/*   Updated: 2024/01/13 22:36:49 by gsoteldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_stack	*ft_new_a_node(int content)
{
	t_stack	*ptr;

	ptr = (t_stack *)malloc(sizeof(t_stack));
	if (ptr == 0)
		return (0);
	ptr->content = content;
	ptr->next = 0;
	return (ptr);
}

t_stack	*ft_str_to_a_list(char **str)
{
	int		i;
	int		counter;
	t_stack	*ptr;
	t_stack	*tmp;

	i = 0;
	counter = 0;
	str = ft_split(str[1], ' ');
	while (str[i] != NULL)
	{
		i++;
		counter++;
	}
	i = 0;
	ptr = ft_new_a_node(ft_atoi(str[i]));
	tmp = ptr;
	while (++i < counter)
	{
		tmp->next = ft_new_a_node(ft_atoi(str[i]));
		tmp = tmp->next;
		tmp->next = NULL;
	}
	return (ptr);
}

t_stack	*ft_new_a_list(int argc, char **argv)
{
	int		i;
	int		j;
	t_stack	*ptr;
	t_stack	*tmp;

	i = 1;
	j = 0;
	if (argc == 2)
		ptr = ft_str_to_a_list(argv);
	else
	{
		j = argc;
		ptr = ft_new_a_node(ft_atoi(argv[i]));
		tmp = ptr;
		while (++i < j)
		{
			tmp->next = ft_new_a_node(ft_atoi(argv[i]));
			tmp = tmp->next;
			tmp->next = NULL;
		}
	}
	return (ptr);
}

void	show_stack(t_stack *stack)
{
	t_stack	*temp;

	temp = stack;
	while (temp != NULL)
	{
		ft_printf("%d\n", temp->content);
		temp = temp->next;
	}
}

void show_stacks(t_stack *stack_a, t_stack *stack_b)
{
	ft_printf("stack_a:\n");
	show_stack(stack_a);
	ft_printf("stack_b:\n");
	show_stack(stack_b);
}
