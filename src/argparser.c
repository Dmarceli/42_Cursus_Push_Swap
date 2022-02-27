#include "../incs/push_swap.h"

int is_intlimits(char **argv)
{
	int i;

	i = 1;
	while (argv[i])
	{	
		if (ft_atol(argv[i]) < -2147483648 || ft_atol(argv[i]) > 2147483647)
		{
			return (0);
		}	
		i++;
	}
	return(1);
}

int is_numeric(int argc, char **argv)
{
	int i;
	int k;

	i = 1;
	k = 0;
	while (i < argc)
	{
		if (argv[i][k] == '-' || argv[i][k] == '+')
			k++;
		while (argv[i][k])
		{
			if ((argv[i][k]) < '0' || (argv[i][k]) > '9' )
				return (0);
			k++;
		}
		i++;
		k = 0;
	}
	return (1);
}

int	is_duplicate(char **argv)
{
	int i;
	int	k;

	i = 1;
	while (argv[i])
	{
		k = i + 1;
		while (argv[k])
		{
			if (ft_strlen(argv[i]) == ft_strlen(argv[k]))
			{
				if (ft_strncmp(argv[i], argv[k], ft_strlen(argv[i])) == 0)
					return(0);
			}
			k++;
		}
		i++;
	}
	return(1);
}

int	ft_argcheck(int argc, char **argv)
{
	int i;
	i = 1;

	if (argc <= 2)
		return(0);
	if (!is_intlimits(argv))
		return(0);
	if (!is_numeric(argc, argv))
		return(0);
	if (!is_duplicate(argv))
		return(0);
	else
		return(1);	
}