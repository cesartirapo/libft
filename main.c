#include "libft.h"

int main()
{
    ft_putchar_fd('A', 1);  // Imprime la letra 'A'
    ft_putchar_fd('\n', 1); // Imprime un salto de línea

    // Prueba de ft_putstr
    ft_putstr_fd("Probando ft_putstr: ", 1);
    ft_putstr_fd("Hola, mundo!", 1);
    ft_putchar_fd('\n', 1); // Salto de línea

    // Prueba de ft_putnbr
    ft_putstr_fd("Probando ft_putnbr con el número 12345: ", 1);
    ft_putnbr_fd(12345, 1);
    ft_putchar_fd('\n', 1); // Salto de línea

    // Prueba de ft_strlen
    int len = ft_strlen("Hola");
    ft_putstr_fd("Probando ft_strlen con la cadena Hola: ", 1);
    ft_putnbr_fd(len, 1);
    ft_putchar_fd('\n', 1); // Salto de línea

    return 0;
}
