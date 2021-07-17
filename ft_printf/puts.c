#include "ft_printf.h"

void	f_putstr(char *str, t_print *print)
{
	int	n;

	n = 0;
	if (!(str))
		f_putstr("(null)", print);
	else
	{
		while (str[n])
		{
			write(1, &str[n], 1);
			print->retval += 1;
			n++;
		}
	}
}

void	f_putchar(char c, t_print *print)
{
	write(1, &c, 1);
	print->retval += 1;
}

void	f_putnbr(int nb, t_print *print)
{
	if (nb == -2147483648)
	{
		f_putchar('-', print);
		f_putchar('2', print);
		nb = 147483648;
	}
	if (nb < 0)
	{
		nb = -nb;
		f_putchar('-', print);
	}
	if (nb < 10)
		f_putchar(nb + 48, print);
	else
	{
		f_putnbr(nb / 10, print);
		f_putnbr(nb % 10, print);
	}
}
