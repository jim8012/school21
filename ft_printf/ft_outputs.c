#include "ft_printf.h"

int	checkDi(t_print *print)
{
	int	d;

	d = va_arg(print->abc, int);
	f_putnbr(d, print);
	return (0);
}

int	checku(t_print *print)
{
	unsigned int	u;
	char			*ui;

	u = va_arg(print->abc, unsigned int);
	ui = itoa_uns(u);
	f_putstr(ui, print);
	if (ui)
		free(ui);
	return (0);
}

int	checkx(t_print *print)
{
	unsigned long	u;
	char			*ux;

	u = va_arg(print->abc, unsigned int);
	ux = itoa_x((unsigned long)u, 'x');
	f_putstr(ux, print);
	if (ux)
		free(ux);
	return (0);
}

int	checkXx(t_print *print)
{
	unsigned long	u;
	char			*ux;

	u = va_arg(print->abc, unsigned int);
	ux = itoa_x((unsigned long)u, 'X');
	f_putstr(ux, print);
	if (ux)
		free(ux);
	return (0);
}

int	checkp(t_print *print)
{
	char			*abc;
	unsigned long	p;

	p = (unsigned long)va_arg(print->abc, void *);
	f_putstr("0x", print);
	abc = itoa_x(p, 'x');
	f_putstr(abc, print);
	if (abc)
		free(abc);
	return (0);
}
