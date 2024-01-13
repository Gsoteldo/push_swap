/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsoteldo <gsoteldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 19:40:43 by gsoteldo          #+#    #+#             */
/*   Updated: 2024/01/13 22:24:04 by gsoteldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

typedef struct t_stack
{
	int				content;
	struct t_stack	*next;
}t_stack;

t_stack	*ft_new_a_node(int content);
t_stack	*ft_new_a_list(int argc, char **argv);
void	show_stack(t_stack *stack);
void	show_stacks(t_stack *stack_a, t_stack *stack_b);

void	push(t_stack **source, t_stack **destiny);
void	push_a(t_stack **stack_a, t_stack **stack_b);
void	push_b(t_stack **stack_a, t_stack **stack_b);

void	swap(t_stack **stack);
void	swap_a(t_stack **stack_a);
void	swap_b(t_stack **stack_b);
void	swap_ab(t_stack **stack_a, t_stack **stack_b);

void	rotate(t_stack **stack);
void	rotate_a(t_stack **stack_a);
void	rotate_b(t_stack **stack_b);
void	rotate_ab(t_stack **stack_a, t_stack **stack_b);

void	reverse_rotate(t_stack **stack);
void	reverse_rotate_a(t_stack **stack_a);
void	reverse_rotate_b(t_stack **stack_b);
void	reverse_rotate_ab(t_stack **stack_a, t_stack **stack_b);

void sort_3_numbers(t_stack *stack_a);
#endif