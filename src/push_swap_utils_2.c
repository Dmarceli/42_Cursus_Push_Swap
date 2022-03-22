/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarceli <dmarceli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 11:16:19 by dmarceli          #+#    #+#             */
/*   Updated: 2022/03/22 14:40:48 by dmarceli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

int	optimized_path(t_data data)
{
	int	small_ind;

	small_ind = find_smallest_nbr_index(&data);
	if (small_ind <= data.number_count_a / 2)
		return (1);
	else
		return (0);
}

int	optimized_rotation_b(t_data *data, t_chunk *chunks)
{
	int	small_ind;

	small_ind = chunks->max;
	if (small_ind >= data->number_count_b / 2)
		return (1);
	else
		return (0);
}

int	find_smallest_nbr_index_b(t_data *data)
{
	int	*tmp;
	int	ret;
	int	i;
	int	min;

	min = data->stack_b[0];
	tmp = data->stack_b;
	i = 1;
	ret = i;
	while (i < data->number_count_b)
	{
		if (tmp[i] < min)
		{
			min = tmp[i];
			ret = i;
		}
		i++;
	}
	return (ret);
}
