
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
