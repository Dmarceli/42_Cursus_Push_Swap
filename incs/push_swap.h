/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarceli <dmarceli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 13:07:51 by dmarceli          #+#    #+#             */
/*   Updated: 2022/03/09 00:58:44 by dmarceli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <limits.h>
# include <stdio.h>
# include <stdlib.h>

///////////////////////////////
//        STRUCTS	        //
/////////////////////////////

typedef struct s_data
{
	int	*stack_a;
	int	*stack_b;
	int	number_count_a;
	int	number_count_b;

}			t_data;

typedef struct s_chunk
{
	int	size;
	int	max;
	int	min;
	int	next;
}				t_chunk;

///////////////////////////////
//        PS FUNCTIONS      //
/////////////////////////////

void	sa(t_data *data, int print);
void	sb(t_data *data, int print);
void	ss(t_data *data);
void	pa(t_data *data);
void	pb(t_data *data);
void	rb(t_data *data, int print);
void	ra(t_data *data, int print);
void	rra(t_data *data, int print);
void	rrb(t_data *data, int print);
void	rrr(t_data *data);

///////////////////////////////
//      SORT FUNCTIONS      //
/////////////////////////////

void	algdistributor(t_data data);
void	org3dig(t_data data);
void	org4dig(t_data data);
void	org5dig(t_data data);
void	orgbigdig(t_data data, int chunknbr);

///////////////////////////////
//           UTILS          //
/////////////////////////////

void	*ft_calloc(size_t count, size_t size);
void	ft_bzero(void *s, size_t n);
long	ft_atol(const char *str);
int		ft_isdigit(int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_strlen(char	*str);
int		is_intlimits(char **argv);
int		is_numeric(int argc, char **argv);
int		is_duplicate(char **argv);
int		ft_argcheck(int argc, char **argv);
int		is_sorted(int argread, int *arr);
int		main(int argc, char **argv);
int		find_smallest_nbr(t_data *data);
int		find_biggest_nbr(t_data *data);
int		is_array_sorted(t_data *data);
void	insertionsort(int *arr, int n);
void	normalizer(t_data	*data);
void	push_it_back(t_data *data, t_chunk *chunks);

#endif