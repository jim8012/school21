#ifndef FT_PRINTF_H

# define FT_PRINTF_H
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

typedef struct s_print
{
	int		retval;
	va_list	abc;
}	t_print;

int		ft_printf(const char *a, ...);
int		parser(const char *a, t_print *print);
void	f_putchar(char c, t_print *print);
void	f_putnbr(int nb, t_print *print);
void	f_putstr(char *str, t_print *print);
char	*ft_unsigneditoa(int n);
char	*itoa_uns(unsigned int n);
char	*convertuns(char *res, unsigned int n, int i);
int		cntNuns(unsigned int n);
char	*itoa_x(unsigned long n, char c);
int		cntNx(unsigned long n);
char	*convertx(char *res, unsigned long n, int i, char c);
int		checkDi(t_print *print);
int		checku(t_print *print);
int		checkx(t_print *print);
int		checkXx(t_print *print);
int		checkp(t_print *print);

#endif
