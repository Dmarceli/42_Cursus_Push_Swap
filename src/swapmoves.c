/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swapmoves.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarceli <dmarceli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 13:07:43 by dmarceli          #+#    #+#             */
/*   Updated: 2022/03/02 13:26:44 by dmarceli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void	sa(t_data *data, int printit)
{
	int	temp;

	temp = data->stack_a[data->number_count_a - 1];
	data->stack_a[data->number_count_a - 1]
		= data->stack_a[data->number_count_a - 2];
	data->stack_a[data->number_count_a - 2] = temp;
	if (printit == 1)
		write(1, "sa\n", 3);
}

void	sb(t_data *data, int printit)
{
	int	temp;

	temp = data->stack_b[data->number_count_b - 1];
	data->stack_b[data->number_count_b - 1]
		= data->stack_b[data->number_count_b - 2];
	data->stack_b[data->number_count_b - 2] = temp;
	if (printit == 1)
		write(1, "sb\n", 3);
}

void	ss(t_data *data)
{
	sa(data, 0);
	sb(data, 0);
	write(1, "sss\n", 4);
}
