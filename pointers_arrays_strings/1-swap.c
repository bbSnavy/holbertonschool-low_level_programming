/**
 * swap_int - function
 * @a: int ptr
 * @b: int ptr
 */
void	swap_int(int *a, int *b)
{
	int	t;

	t = *a;
	*a = *b;
	*b = t;
}
