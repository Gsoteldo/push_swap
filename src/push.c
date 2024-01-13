
#include "../include/push_swap.h"

void	push(t_stack **source, t_stack **destiny)
{
	t_stack	*temp;

	if (source == NULL)
		return ;
	temp = (*source)->next;
	(*source)->next = *destiny;
	*destiny = *source;
	*source = temp;
}

void	push_a(t_stack **stack_a, t_stack **stack_b)
{
	push(stack_b, stack_a);
	ft_printf("pa\n");
}

void	push_b(t_stack **stack_a, t_stack **stack_b)
{
	push(stack_a, stack_b);
	ft_printf("pb\n");
}
