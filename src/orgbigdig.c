/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   orgbigdig.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarceli <dmarceli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 15:54:49 by dmarceli          #+#    #+#             */
/*   Updated: 2022/03/22 16:25:19 by dmarceli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void	move_b(t_data *data, t_chunk *chunks)
{
	if (data->stack_b[0] == chunks->max - 1
		&& data->stack_b && data->stack_a[1] == chunks->max)
		sb(data, 1);
	else if (data->stack_b[0] == chunks->min + 2
		&& data->stack_b && data->stack_a[1] == chunks->min + 1)
		sb(data, 1);
	else
	{
		if (optimized_rotation_b(data, chunks))
			rb(data, 1);
		else
			rrb(data, 1);
	}
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
			move_b(data, chunks);
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
