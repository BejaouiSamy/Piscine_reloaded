int	ft_recursive_factorial(int	nb)
{
	int res;

	res = 1;
	if (nb > 0)
	{
		res *= nb * ft_recursive_factorial(nb - 1);
		nb -= 1;
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
	printf("%d", ft_recursive_factorial(atoi(av[1])));
}*/