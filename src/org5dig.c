/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   org5dig.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarceli <dmarceli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 13:06:54 by dmarceli          #+#    #+#             */
/*   Updated: 2022/03/02 16:29:00 by dmarceli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void	org5dig(t_data data)
{
	while (data.stack_a[data.number_count_a - 1] != find_smallest_nbr(&data))
		rra(&data, 1);
	pb(&data);
	while (data.stack_a[data.number_count_a - 1] != find_smallest_nbr(&data))
		rra(&data, 1);
	pb(&data);
	org3dig(data);
	pa(&data);
	pa(&data);
}
