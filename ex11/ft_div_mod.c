void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>
int main()
{
	int a;
	int b;
	ft_div_mod(42, 10, &a, &b);

	printf("%d\n%d\n", a, b);
}*/
