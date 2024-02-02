#include "../include/push_swap.h"

void max_min_in_b(t_stack *stacks)
{
	int index;
	
	stacks->moves->rb = 0;
	stacks->moves->rrb = 0;
	index = find_index(stacks->list_b, stacks->value->max_b);
	if(stacks->list_b->content != stacks->value->max_b)
	{
		if (stack_size(stacks->list_b) % 2 == 0)
		{
			if (index + 1 > stack_size(stacks->list_b) / 2)
				stacks->moves->rrb = (stack_size(stacks->list_b) - index);
			else
				stacks->moves->rb = index;
		}
		else
		{
			if (index > stack_size(stacks->list_b) / 2)
				stacks->moves->rrb = stack_size(stacks->list_b) - index;
			else
				stacks->moves->rb = index;
		}
	}
}

void new_elem_in_b(t_stack *stacks)
{
	int index;
	
	stacks->moves->rb = 0;
	stacks->moves->rrb = 0;
	index = find_index(stacks->list_b, search_number(stacks->list_b, stacks->list_a->content));
	if(stacks->list_b->content != search_number(stacks->list_b, stacks->list_a->content))
	{
		if (stack_size(stacks->list_b) % 2 == 0)
		{
			if (index + 1 > stack_size(stacks->list_b) / 2)
				stacks->moves->rrb = (stack_size(stacks->list_b) - index);
			else
				stacks->moves->rb = index;
		}
		else
		{
			if (index > stack_size(stacks->list_b) / 2)
				stacks->moves->rrb = stack_size(stacks->list_b) - index;
			else
				stacks->moves->rb = index;
		}
	}
}

void to_top_stack_a(t_stack *stacks, t_linked_list *stack_a, int i)
{
	stacks->moves->ra = 0;
	stacks->moves->rra = 0;
	stacks->moves->pb = 1;
	if(stacks->list_a->content != stack_a->content)
	{
		if (stack_size(stacks->list_a) % 2 == 0)
		{
			if (i + 1 > stack_size(stacks->list_a) / 2)
				stacks->moves->rra = (stack_size(stacks->list_a) - i);
			else
				stacks->moves->ra = i;
		}
		else
		{
			if (i > stack_size(stacks->list_a) / 2)
				stacks->moves->rra = stack_size(stacks->list_a) - i;
			else
				stacks->moves->ra = i;
		}
	}
}