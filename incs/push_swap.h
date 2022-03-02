#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct s_data
{
	int		*stack_a;
	int	 	*stack_b;
	int		number_count_a;
	int		number_count_b;
}			t_data;

///////////////////////////////
//        PS FUNCTIONS      //
/////////////////////////////

void	sa(t_data *data, int print);
void	sb(t_data *data, int print);
void 	ss(t_data *data);
void 	pa(t_data *data);
void 	pb(t_data *data);
void	rb(t_data *data, int print);
void	ra(t_data *data, int print);
void	rra(t_data *data, int print);
void	rrb(t_data *data, int print);
void	rrr(t_data *data);

///////////////////////////////
//      SORT FUNCTIONS      //
/////////////////////////////

void	org3dig(t_data data);
void	org5dig(t_data data);


///////////////////////////////
//           UTILS          //
/////////////////////////////

void			*ft_calloc(size_t count, size_t size);
void			ft_bzero(void *s, size_t n);
long 			ft_atol(const char *str);
int 			ft_isdigit(int c);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
unsigned int	ft_strlen(char	*str);
int 			is_intlimits(char **argv);
int 			is_numeric(int argc, char **argv);
int				is_duplicate(char **argv);
int 			ft_argcheck(int argc, char **argv);
int 			is_sorted(int argread, int *arr);
int 			main(int argc, char **argv);

#endif