/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarceli <dmarceli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 13:07:06 by dmarceli          #+#    #+#             */
/*   Updated: 2022/03/03 15:07:01 by dmarceli         ###   ########.fr       */
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
	if (argc < 2)
		return (0);
	if (ft_argcheck(argc, argv) != 1)
	{
		write (1, "\e[0;31mError\n\e[0;30m", 15);
		return (0);
	}
	while (i < argc - 1)
	{
		data.stack_a[i] = ft_atol(argv[i + 1]);
		i++;
	}
	// printf("%d    %d\n", data.stack_a[4], data.stack_b[4]);
	// printf("%d    %d\n", data.stack_a[3], data.stack_b[3]);
	printf("%d    %d\n", data.stack_a[2], data.stack_b[2]);
	printf("%d    %d\n", data.stack_a[1], data.stack_b[1]);
	printf("%d    %d\n", data.stack_a[0], data.stack_b[0]);
	org3dig(data);
	// printf("%d    %d\n", data.stack_a[4], data.stack_b[4]);
	// printf("%d    %d\n", data.stack_a[3], data.stack_b[3]);
	printf("%d    %d\n", data.stack_a[2], data.stack_b[2]);
	printf("%d    %d\n", data.stack_a[1], data.stack_b[1]);
	printf("%d    %d\n", data.stack_a[0], data.stack_b[0]);
	free(data.stack_a);
	free(data.stack_b);
}
