/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   psdistributor.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarceli <dmarceli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 22:48:48 by dmarceli          #+#    #+#             */
/*   Updated: 2022/03/22 15:59:55 by dmarceli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void	algdistributor(t_data data)
{
	if (data.number_count_a == 2)
		sa(&data, 1);
	else if (data.number_count_a == 3)
		org3dig(data);
	else if (data.number_count_a == 4)
		org4dig(data);
	else if (data.number_count_a == 5)
		org5dig(data);
	else if (data.number_count_a <= 25)
		orgbigdig(data, 1);
	else if (data.number_count_a <= 100)
		orgbigdig(data, 4);
	else
		orgbigdig(data, 7);
}
