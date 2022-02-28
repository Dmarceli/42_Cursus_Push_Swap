#include "../incs/push_swap.h"

void ra(t_data *data, int printit)
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
		write(1,"ra\n",4);
}

void rb(t_data *data, int printit)
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
		write(1,"rb\n",4);
}

void rr(t_data *data)
{
	rra(data, 0);
	rrb(data, 0);
	write(1, "rr\n", 4);
}