#include "../incs/push_swap.h"

void org3dig(t_data data)
{
	if(data.stack_a[0] > data.stack_a[1] && data.stack_a[1] < data.stack_a[2] && data.stack_a[2] > data.stack_a[0])
		sa(&data, 1);
	else if(data.stack_a[0] > data.stack_a[1] && data.stack_a[1] > data.stack_a[2] && data.stack_a[2] < data.stack_a[0])
	{
		sa(&data, 1);
		rra(&data, 1);
	}
	else if(data.stack_a[0] > data.stack_a[1] && data.stack_a[1] < data.stack_a[2] && data.stack_a[2] < data.stack_a[0])
		ra(&data, 1);
	else if(data.stack_a[0] < data.stack_a[1] && data.stack_a[1] > data.stack_a[2] && data.stack_a[2] > data.stack_a[0])
	{
		sa(&data, 1);
		ra(&data, 1);
	}
	else
		rra(&data, 1);
}