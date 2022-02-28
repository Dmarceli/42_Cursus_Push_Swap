#include "../incs/push_swap.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(size * count);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, size * count);
	return (ptr);
}

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*c;

	c = (char *)s;
	i = -1;
	while (++i < n)
		c[i] = 0;
}

long	ft_atol(const char *str)
{
	int			sign;
	long long	num;

	sign = 1;
	num = 0;
	while ((*str == 32) || (*str >= 9 && *str <= 13))
		str++;
	if (*str == 45)
	{
		sign *= -1;
		str++;
	}
	else if (*str == 43)
		str++;
	while (*str >= 48 && *str <= 57)
	{
		num = num * 10;
		num += (sign * (*(str++) - '0'));
	}
	return (num);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*s11;
	unsigned char	*s22;

	s11 = (unsigned char *)s1;
	s22 = (unsigned char *)s2;
	while ((*s11 || *s22) && n > 0)
	{
		if (*s11 != *s22)
		{
			return (*s11 - *s22);
		}
		n--;
		s11++;
		s22++;
	}
	return (0);
}

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
