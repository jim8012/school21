#include "ft_printf.h"

int	parser(const char *a, t_print *print)
{
	if (*a == 's')
		f_putstr(va_arg(print ->abc, char *), print);
	else if (*a == 'd' || *a == 'i')
		checkDi(print);
	else if (*a == 'u')
		checku(print);
	else if (*a == 'x')
		checkx(print);
	else if (*a == 'X')
		checkXx(print);
	else if (*a == 'p')
		checkp(print);
	else if (*a == 'c')
		f_putchar((char)va_arg(print->abc, int), print);
	else if (*a == '%')
		f_putchar('%', print);
	return (0);
}

int	ft_printf(const char *a, ...)
{
	int		i;
	t_print	print;

	i = 0;
	va_start(print.abc, a);
	print.retval = 0;
	while (a[i])
	{
		if (a[i] == '%')
			parser(&a[++i], &print);
		else
		{
			write(1, &a[i], 1);
			print.retval += 1;
		}
		i++;
	}
	va_end(print.abc);
	return (print.retval);
}
