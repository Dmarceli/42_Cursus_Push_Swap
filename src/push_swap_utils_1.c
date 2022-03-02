/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils_1.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarceli <dmarceli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 14:19:21 by dmarceli          #+#    #+#             */
/*   Updated: 2022/03/02 16:29:52 by dmarceli         ###   ########.fr       */
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
	//printf("Smallest element present in given array: %d\n", min);
	return (min);
}
