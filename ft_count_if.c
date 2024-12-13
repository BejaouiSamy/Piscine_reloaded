int		ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int counter;

	counter = 0;
	i = 0;
	while (tab[i] != 0)
	{
		if (f(tab[i]) == 1)
			counter++;
		i++;
	}
	return (counter);
}

/* Exemple de fonction pointer par (*f)

int starts_with_a(char *str)
{
    if (str[0] == 'A' || str[0] == 'a')
        return (1);
    return (0);
}
Fonction qui va chercher les mots commencent par A ou a.
retourne 1 et incremente si valide, sinon continue de parcourir.
*/