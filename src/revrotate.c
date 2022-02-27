#include "../incs/push_swap.h"

void rra(t_data *data, int printit)
{
	int temp;
	int i;

	i = data->number_count_a;
	temp = data->stack_a[i - 1];
	while(i > 0)
	{
		data->stack_a[i] = data->stack_a[i - 1];
		i--;
	}
	data->stack_a[0] = temp;
	if(printit == 1)
		write(1,"rra\n",4);
}

void rrb(t_data *data, int printit)
{
	int temp;
	int i;

	i = data->number_count_b;
	temp = data->stack_b[i - 1];
	while(i > 0)
	{
		data->stack_b[i] = data->stack_b[i - 1];
		i--;
	}
	data->stack_b[0] = temp;
	if(printit == 1)
		write(1,"rrb\n",4);
}

void rrr(t_data *data)
{
	rra(data, 0);
	rrb(data, 0);
	write(1, "rrr\n", 4);
}