#include "../incs/push_swap.h"

int main(int argc, char **argv)
{
	t_data	data;
	int		i;

	data.stack_a = (int *)malloc(sizeof(int) * argc - 1);
	data.stack_b = ft_calloc(sizeof(int) , argc - 1);
	data.number_count_a = argc - 1;
	data.number_count_b = 0;
	
	i = 0;

	if (ft_argcheck(argc, argv) != 1)
	{
		write (1 ,"Error\n", 7);
		return (0);
	}
	while (i < argc - 1)
	{
		data.stack_a[i] = ft_atol(argv[i + 1]);
		i++;
	}
	printf("%d    %d\n", data.stack_a[0], data.stack_b[0]);
	printf("%d    %d\n", data.stack_a[1], data.stack_b[1]);
	printf("%d    %d\n", data.stack_a[2], data.stack_b[2]);
	org3dig(data);
	printf("%d    %d\n", data.stack_a[0], data.stack_b[0]);
	printf("%d    %d\n", data.stack_a[1], data.stack_b[1]);
	printf("%d    %d\n", data.stack_a[2], data.stack_b[2]);

}
