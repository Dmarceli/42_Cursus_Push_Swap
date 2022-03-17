/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   orgbigdig.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarceli <dmarceli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 15:54:49 by dmarceli          #+#    #+#             */
/*   Updated: 2022/03/17 16:59:00 by dmarceli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void	push_it_back(t_data *data, t_chunk *chunks)
{
	while (data->number_count_b > 0)
	{
		if (data->stack_b[0] == chunks->max)
		{
			pa(data);
			chunks->max--;
		}	
		else if (data->stack_b[0] == chunks->min + 1)
		{
			pa(data);
			ra(data, 1);
			chunks->min++;
		}
		else
		{
			if (optimized_path_b(data, chunks))
				rrb(data, 1);
			else
				rb(data, 1);
		}
	}
}

void	sorter(t_data data, t_chunk chunks, int chunknbr)
{
	while (chunknbr)
	{
		while (data.number_count_b < chunks.size)
		{
			if (data.stack_a[0] <= chunks.max && data.stack_a[0] > chunks.min)
				pb(&data);
			else
				ra(&data, 1);
		}
		push_it_back(&data, &chunks);
		chunks.max = chunks.next + 1;
		chunks.min = chunks.max - chunks.size;
		chunks.next = chunks.min;
		if (chunknbr == 2)
		{
			chunks.min = 0;
			chunks.size = chunks.max;
		}
		chunknbr--;
	}
	while (data.stack_a[data.number_count_a - 1] != data.number_count_a)
		rra(&data, 1);
}

void	orgbigdig(t_data data, int chunknbr)
{
	t_chunk	chunks;

	chunks.size = data.number_count_a / chunknbr;
	chunks.max = data.number_count_a;
	chunks.min = chunks.max - chunks.size;
	chunks.next = chunks.min - 1;
	sorter(data, chunks, chunknbr);
}
