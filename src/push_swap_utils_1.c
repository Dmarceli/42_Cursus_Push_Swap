/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils_1.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarceli <dmarceli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 14:19:21 by dmarceli          #+#    #+#             */
/*   Updated: 2022/03/08 15:46:47 by dmarceli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

int	find_smallest_nbr(t_data *data)
{
	int	*tmp;
	int	length;
	int	i;
	int	min;

	min = data->stack_a[0];
	tmp = data->stack_a;
	length = data->number_count_a ;
	i = 0;
	while (i < length)
	{
		if (tmp[i] < min)
			min = tmp[i];
		i++;
	}
	return (min);
}

int	find_biggest_nbr(t_data *data)
{
	int	*tmp;
	int	length;
	int	i;
	int	max;

	max = data->stack_a[0];
	tmp = data->stack_a;
	length = data->number_count_a ;
	i = 0;
	while (i < length)
	{
		if (tmp[i] > max)
			max = tmp[i];
		i++;
	}
	return (max);
}

int	is_array_sorted(t_data *data)
{
	int	i;

	i = 0;
	while (i < data->number_count_a - 1)
	{
		if (data->stack_a[i] > data->stack_a[i + 1])
			return (0);
		++i;
	}
	return (1);
}
