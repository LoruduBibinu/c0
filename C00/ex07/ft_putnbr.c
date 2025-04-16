#include <unistd.h>
void ft_write_number(int nb, int length){
    while (length > 0)
    {
        int divisor = 1;
        for (int j = 1; j < length; j++)
        {
            divisor *= 10;
        }
        char c = (nb / divisor) % 10 + '0';
        write(1, &c, 1);
        length--;
    }
}
int ft_check_negative(long int nb){
    if (nb == 0)
    {
        write(1, "0", 1);
    }
    // inverse le nombre s'il est négatif

    if (nb < 0)
    {
        write(1, "-", 1);
        nb = nb * (-1);
    }
    return nb;
}
int ft_is_integer(int nb){
    if (nb < -2147483647 || nb > 2147483647)
    {   write(1, "Error: parameter wasn't an integer", 35);
        return 0;
    }
    return 1;
}
void ft_putnbr(long int nb){
    if (!ft_is_integer(nb)){
        return;
    }
    int length = 0;
    nb = ft_check_negative(nb);
    // trouvons la longueur.
    int tmp = nb;
    while (tmp > 0)
    {
        tmp = tmp / 10;
        length++;
    }
    // On a la longueur du nombre. mnt div par 10 et décrémentons.  1 102 /100 = 1 puis div par 10 = 10 donc modulo 10. div par length - 1
   ft_write_number(nb, length);
}