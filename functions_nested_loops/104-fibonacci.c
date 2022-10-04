#include <stdio.h>

/**
 * set - function
 * @val: value
 * @rh: pointer
 * @rl: pointer
 */
void set(unsigned long val, unsigned long *rh, unsigned long *rl)
{
	unsigned long	t;

	t = 10000000000000000;
	if (val >= t)
	{
		*rh = val / t;
		*rl = val % t;
	}
	else
	{
		*rh = 0;
		*rl = val;
	}
}

/**
 * mov - function
 * @xh: pointer
 * @xl: pointer
 * @rh: pointer
 * @rl: pointer
 */
void mov(unsigned long *xh, unsigned long *xl,
	unsigned long *rh, unsigned long *rl)
{
	*rh = *xh;
	*rl = *xl;
}

/**
 * add - function
 * @xh: pointer
 * @xl: pointer
 * @yh: pointer
 * @yl: pointer
 * @rh: pointer
 * @rl: pointer
 */
void add(unsigned long *xh, unsigned long *xl,
	unsigned long *yh, unsigned long *yl, unsigned long *rh, unsigned long *rl)
{
	unsigned long	t;

	t = 10000000000000000;
	*rl = *xl + *yl;
	*rh = *xh + *yh;
	if (*rl >= t)
	{
		*rh += *rl / t;
		*rl %= t;
	}
}

/**
 * put - function
 * @xh: pointer
 * @xl: pointer
 */
void put(unsigned long *xh, unsigned long *xl)
{
	if (*xh == 0)
		printf("%lu", *xl);
	else
		printf("%lu%016lu", *xh, *xl);
}

/**
 * main - Main function
 *
 * Return: Exit status code
 */
int	main(void)
{
	int				i;
	unsigned long	xh;
	unsigned long	xl;
	unsigned long	yh;
	unsigned long	yl;
	unsigned long	zh;
	unsigned long	zl;

	set(0, &xh, &xl);
	set(1, &yh, &yl);
	for (i = 1; i <= 98; i++)
	{
		add(&xh, &xl, &yh, &yl, &zh, &zl);
		mov(&yh, &yl, &xh, &xl);
		mov(&zh, &zl, &yh, &yl);
		put(&yh, &yl);
		if (i != 98)
			printf(", ");
	}
	printf("\n");
	return (0);
}
