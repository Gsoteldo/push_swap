/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsoteldo <gsoteldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 19:40:43 by gsoteldo          #+#    #+#             */
/*   Updated: 2024/01/09 19:58:15 by gsoteldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

typedef struct t_stack_a
{
	int					content;
	struct t_stack_a	*next;
}t_stack_a;

typedef struct t_stack_b
{
	int					content;
	struct t_stack_b	*next;
}t_stack_b;

t_stack_a	*ft_new_a_node(int content);
t_stack_a	*ft_new_a_list(int argc, char **argv);


#endif