#include "../incs/push_swap.h"

void rra(t_data *data, int printit)
{
	int temp;
	int i;

	i = 0;
	temp = data->stack_a[0];
	while(i < data->number_count_a - 1)
	{
		data->stack_a[i] = data->stack_a[i + 1];
		i++;
	}
	data->stack_a[i] = temp;
	if(printit == 1)
		write(1,"rra\n",4);
}

void rrb(t_data *data, int printit)
{
	int temp;
	int i;

	i = 0;
	temp = data->stack_b[0];
	while(i < data->number_count_b - 1)
	{
		data->stack_b[i] = data->stack_b[i + 1];
		i++;
	}
	data->stack_b[i] = temp;
	if(printit == 1)
		write(1,"rrb\n",3);
}

void rrr(t_data *data)
{
	ra(data, 0);
	rb(data, 0);
	write(1,"rrr\n",4);
}
