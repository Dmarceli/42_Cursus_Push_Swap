/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushmoves.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarceli <dmarceli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 13:07:28 by dmarceli          #+#    #+#             */
/*   Updated: 2022/03/02 13:31:14 by dmarceli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void	pa(t_data *data)
{
	if (data->number_count_b < 1)
		return ;
	data->number_count_a++;
	data->number_count_b--;
	data->stack_a[data->number_count_a - 1]
		= data->stack_b[data->number_count_b];
	write(1, "pa\n", 3);
}

void	pb(t_data *data)
{
	if (data->number_count_a < 1)
		return ;
	data->number_count_b++;
	data->number_count_a--;
	data->stack_b[data->number_count_b - 1]
		= data->stack_a[data->number_count_a];
	write(1, "pb\n", 3);
}
