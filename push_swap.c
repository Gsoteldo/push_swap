/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsoteldo <gsoteldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 18:33:54 by gsoteldo          #+#    #+#             */
/*   Updated: 2024/01/08 21:23:56 by gsoteldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int main(int argc, char *argv[])
{
	int i;
	int numbers;

	i = 1;
	ft_printf("%s tiene %d letras\n", "Hola mundo", ft_strlen("Hola mundo"));
	if (argc < 2)
	{
		ft_printf("Error\n");
		return (0);
	}
	while (i < argc)
	{
		numbers = ft_atoi(argv[i]);
		ft_printf("%d\n", numbers);
		i++;
	}
	

	return (0);
}