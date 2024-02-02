/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabo <gabo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 19:40:43 by gsoteldo          #+#    #+#             */
/*   Updated: 2024/02/02 13:06:45 by gabo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

typedef struct t_linked_list
{
	int				content;
	struct t_linked_list	*next;
}t_linked_list;

typedef struct t_stack
{
	struct t_linked_list	*list_a;
	struct t_linked_list	*list_b;
	struct t_moves			*moves;
	struct t_moves			*cheapest;
	struct t_value			*value;

}t_stack;

typedef struct t_value
{
	int				max_a;
	int				max_b;
	int				min_a;
	int				min_b;
}t_value;

typedef struct t_moves
{
	int 	moves;
	int 	pa;
	int		pb;
	int		sa;
	int		sb;
	int		ss;
	int		ra;
	int		rb;
	int		rra;
	int		rrb;
	int		rr;
	int		rrr;	
}t_moves;


//checker
int	checker(int argc, char **argv, t_stack *stacks);
void 	is_ordered(t_linked_list *stack_a);

//Stack_a
t_linked_list	*ft_new_a_node(int content);
t_linked_list	*ft_new_a_list(int argc, char **argv);
void			show_stack(t_linked_list *stack);
int				stack_size(t_linked_list *lst);
void			free_stacks(t_stack *stacks, int flag);
int				is_repeated(int argc, char **argv);
void 			is_max_min(t_stack *stacks, int flag);
t_linked_list	*ft_last(t_linked_list *stack);

//Push moves
void	push(t_linked_list **source, t_linked_list **destiny);
void	push_a(t_linked_list **stack_a, t_linked_list **stack_b);
void	push_b(t_linked_list **stack_a, t_linked_list **stack_b);

//Swap moves
void	swap(t_linked_list **stack);
void	swap_a(t_linked_list **stack_a);
void	swap_b(t_linked_list **stack_b);
void	swap_ab(t_linked_list **stack_a, t_linked_list **stack_b);

//Rotate moves
void	rotate(t_linked_list **stack);
void	rotate_a(t_linked_list **stack_a);
void	rotate_b(t_linked_list **stack_b);
void	rotate_ab(t_linked_list **stack_a, t_linked_list **stack_b);

//Reverse rotate moves
void	reverse_rotate(t_linked_list **stack);
void	reverse_rotate_a(t_linked_list **stack_a);
void	reverse_rotate_b(t_linked_list **stack_b);
void	reverse_rotate_ab(t_linked_list **stack_a, t_linked_list **stack_b);

//Sortings
void sort_3_numbers(t_linked_list **stack_a);
void sort_4_numbers(t_stack *stacks);

int find_index(t_linked_list *stack, int value);
void moves_stack_a(t_stack *stacks);
int search_number(t_linked_list *stack, int value);
void to_top_stack_a(t_stack *stacks, t_linked_list *stack_a, int i);
void new_elem_in_b(t_stack *stacks);
void max_min_in_b(t_stack *stacks);
void cheapest(t_stack *stacks);
#endif