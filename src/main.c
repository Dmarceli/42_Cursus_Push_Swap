/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarceli <dmarceli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 13:07:06 by dmarceli          #+#    #+#             */
/*   Updated: 2022/03/22 15:15:26 by dmarceli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

int	main(int argc, char **argv)
{
	t_data	data;
	int		i;

	data.stack_a = ft_calloc(sizeof(int), argc - 1);
	data.stack_b = ft_calloc(sizeof(int), argc - 1);
	data.number_count_a = argc - 1;
	data.number_count_b = 0;
	i = 0;
	if (!ft_argcheck(argc, argv))
		return (0);
	while (i < argc - 1)
	{
		data.stack_a[i] = ft_atol(argv[i + 1]);
		i++;
	}
	if (is_array_sorted(&data) == 1)
		return (0);
	normalizer(&data);
	algdistributor(data);
	if (data.stack_a)
		free(data.stack_a);
	if (data.stack_b)
		free(data.stack_b);
}
