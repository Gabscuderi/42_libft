#include "libft.h"

void    ft_putnbr_fd(int nbr, int fd)
{
    int    digit;

    if (nbr == -2147483648)
    {
        ft_putchar_fd('-', fd);
        ft_putchar_fd('2', fd);
        nbr = 147483648;
    }
    else if (nbr < 0)
    {
        ft_putchar_fd('-', fd);
        nbr *= -1;
    }
    else
    {
        if (nbr > 9)
        {
            ft_putnbr_fd(nbr / 10, fd);
            ft_putnbr_fd(nbr % 10, fd);
        }
        else
        {
            digit = nbr + 48;
            write(fd, &digit, 1);
        }
    }
}