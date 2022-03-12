/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarceli <dmarceli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 13:07:06 by dmarceli          #+#    #+#             */
/*   Updated: 2022/03/12 20:51:48 by dmarceli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void printArray(int arr[], int n);

int	main(int argc, char **argv)
{
	t_data	data;
	int		i;

	data.stack_a = ft_calloc(sizeof(int), argc - 1);
	data.stack_b = ft_calloc(sizeof(int), argc - 1);
	data.number_count_a = argc - 1;
	data.number_count_b = 0;
	i = 0;
	if (!ft_argcheck(argc, argv))
		return (0);
	while (i < argc - 1)
	{
		data.stack_a[i] = ft_atol(argv[i + 1]);
		i++;
	}
	//printArray(data.stack_a, data.number_count_a);
	if (is_array_sorted(&data) == 1)
		return (0);
	normalizer(&data);
	//printf("smallest nb i: %d\n", find_smallest_nbr_index(&data));
	algdistributor(data);
	//printArray(data.stack_a, data.number_count_a);
	//printf("smallest nb i: %d\n", find_smallest_nbr_index(&data));
	if (data.stack_a)
		free(data.stack_a);
	if (data.stack_b)
		free(data.stack_b);
}
