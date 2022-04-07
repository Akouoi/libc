int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <=122)
			|| (c >= 48 && c <= 57))
		return (8);
	else
		return (0);
}

int	main()
{
	int i = 0;

	while(i <= 128)
	{
		printf("%i ", ft_isalnum(i));
		i++;
	}
	printf("\n");
	i = 0;
	while(i <= 128)
	{
		printf("%i ", isalnum(i));
		i++;
	}
}