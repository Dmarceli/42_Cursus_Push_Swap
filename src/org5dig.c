/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   org5dig.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarceli <dmarceli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 13:06:54 by dmarceli          #+#    #+#             */
/*   Updated: 2022/03/12 20:51:24 by dmarceli         ###   ########.fr       */
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

void	org5dig(t_data data)
{
	while (data.stack_a[0] != find_smallest_nbr(&data))
	{
		if (optimized_path(data))
			ra(&data, 1);
		else
			rra(&data, 1);
	}
	pb(&data);
	while (data.stack_a[0] != find_smallest_nbr(&data))
	{
		if (optimized_path(data))
			ra(&data, 1);
		else
			rra(&data, 1);
	}
	pb(&data);
	org3dig(data);
	pa(&data);
	pa(&data);
}

void	org4dig(t_data data)
{
	while (data.stack_a[0] != find_smallest_nbr(&data))
		ra(&data, 1);
	pb(&data);
	org3dig(data);
	pa(&data);
}
