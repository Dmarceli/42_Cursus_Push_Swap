/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushmoves.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarceli <dmarceli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 13:07:28 by dmarceli          #+#    #+#             */
/*   Updated: 2022/03/13 14:12:29 by dmarceli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void	pa(t_data *data)
{
	int	i;
	int	j;

	j = -1;
	i = data->number_count_a + 1;
	if (data->number_count_b < 1)
		return ;
	if (data->number_count_a < 1)
		data->stack_a[0] = data->stack_b[0];
	else
	{
		while (--i > 0)
			data->stack_a[i] = data->stack_a[i - 1];
		data->stack_a[0] = data->stack_b[0];
	}
	data->stack_b[0] = 0;
	while (++j < data->number_count_b)
		data->stack_b[j] = data->stack_b[j + 1];
	data->number_count_a++;
	data->number_count_b--;
	write(1, "pa\n", 3);
}

void	pb(t_data *data)
{
	int	i;
	int	j;

	j = -1;
	i = data->number_count_b + 1;
	if (data->number_count_a < 1)
		return ;
	if (data->number_count_b < 1)
		data->stack_b[0] = data->stack_a[0];
	else
	{
		while (--i > 0)
			data->stack_b[i] = data->stack_b[i - 1];
		data->stack_b[0] = data->stack_a[0];
	}
	data->stack_a[0] = 0;
	while (++j < data->number_count_a)
		data->stack_a[j] = data->stack_a[j + 1];
	data->number_count_b++;
	data->number_count_a--;
	write(1, "pb\n", 3);
}
