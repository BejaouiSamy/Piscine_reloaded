void ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}
/*
La fonction "void(*f)(int)" pointe vers une fonction,
ca permet a la fonction foreach d'appeler une fonction exterieur.
exemple :

void example_function(int x)
{
    printf("Valeur : %d\n", x);
}

void (*f)(int) = example_function;
f(42);
*/
