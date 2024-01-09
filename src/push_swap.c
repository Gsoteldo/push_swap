/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsoteldo <gsoteldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 18:33:54 by gsoteldo          #+#    #+#             */
/*   Updated: 2024/01/09 20:04:38 by gsoteldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int main(int argc, char *argv[])
{
	t_stack_a *lista;
	int i;
	//int numbers;

	i = 1;
	if (argc < 2)
	{
		ft_printf("Error\n");
		return (0);
	}
		lista = ft_new_a_list(argc, argv);
		ft_printf("%d\n", lista->content);
		ft_printf("%d\n", lista->next->content);
		ft_printf("%d\n", lista->next->next->content);
	
	

	return (0);
}