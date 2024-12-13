int	ft_iterative_factorial(int	nb)
{
	int res;

	res = 1;
	while (nb > 0)
	{
		res *= nb;
		nb--;
	}
	if (nb < 0)
		return (0);
	return (res);
}
/*
#include <stdlib.h>
#include <stdio.h>
int main(int ac, char **av)
{
	printf("%d", ft_iterative_factorial(atoi(av[1])));
}*/