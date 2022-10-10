/**
 * reverse_array - function
 * @a: int ptr
 * @n: int
 */
void	reverse_array(int *a, int n)
{
	int	v;
	int	x;

	x = 0;
	while (x < (n / 2))
	{
		v = a[x];
		a[x] = a[n - 1 - x];
		a[n - 1 - x] = v;
		x++;
	}
}
