/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revrotatemoves.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarceli <dmarceli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 13:07:31 by dmarceli          #+#    #+#             */
/*   Updated: 2022/03/02 13:25:11 by dmarceli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void	rra(t_data *data, int printit)
{
	int	temp;
	int	i;

	i = 0;
	temp = data->stack_a[0];
	while (i < data->number_count_a - 1)
	{
		data->stack_a[i] = data->stack_a[i + 1];
		i++;
	}
	data->stack_a[i] = temp;
	if (printit == 1)
		write(1, "rra\n", 4);
}

void	rrb(t_data *data, int printit)
{
	int	temp;
	int	i;

	i = 0;
	temp = data->stack_b[0];
	while (i < data->number_count_b - 1)
	{
		data->stack_b[i] = data->stack_b[i + 1];
		i++;
	}
	data->stack_b[i] = temp;
	if (printit == 1)
		write(1, "rrb\n", 4);
}

void	rrr(t_data *data)
{
	ra(data, 0);
	rb(data, 0);
	write(1, "rrr\n", 4);
}
