#include "../incs/push_swap.h"

void sa(t_data *data, int printit)
{
	int temp;
	temp = data->stack_a[0];
	data->stack_a[0] = data->stack_a[1];
	data->stack_a[1] = temp;
	if (printit == 1)
		write(1, "sa\n", 3);
}

void sb(t_data *data, int printit)
{
	int temp;
	temp = data->stack_b[0];
	data->stack_b[0] = data->stack_b[1];
	data->stack_b[1] = temp;
	if (printit == 1)
		write(1, "sb\n", 3);
}

void ss(t_data *data)
{
	sa(data, 0);
	sb(data, 0);
	write(1, "sss\n", 4);
}