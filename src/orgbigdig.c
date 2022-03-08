/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   orgbigdig.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarceli <dmarceli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 15:54:49 by dmarceli          #+#    #+#             */
/*   Updated: 2022/03/08 19:55:26 by dmarceli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void	orgbigdig(t_data *data, int chunknbr)
{
	t_chunk	chunk;

	chunk.temp = data->stack_a;
	chunk.size = data->number_count_a / chunknbr;
	chunk.max = find_biggest_nbr(&data);
	chunk.min = find_smallest_nbr(&data);
}
