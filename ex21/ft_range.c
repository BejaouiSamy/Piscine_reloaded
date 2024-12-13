#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int		range;
	int		i;
	int		*buffer;

	if (min >= max)
		return (0);
	range = max - min;
	buffer = malloc(range * sizeof(int));
	if (!buffer)
		return (0);
	i = 0;
	while (i < range)
	{
		buffer[i] = min + i;
		i++;
	}
	return (buffer);
}
/*
int		main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	i = 0;
	int	size;

	min = 5;
	max = 100;
	size = max - min;
	tab = ft_range(min, max);
	while(i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}

}*/