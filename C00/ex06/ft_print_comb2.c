#include <unistd.h>
void ft_print_comb2(void)
{
    int a;
    int b;

    a=0;
    b=0;

    while (a < 100)
    {
        b = a + 1;
        while (b < 100)
        {
            write(1, &"0123456789"[a / 10], 1);
            write(1, &"0123456789"[a % 10], 1);
            write(1, " ", 1);
            write(1, &"0123456789"[b / 10], 1);
            write(1, &"0123456789"[b % 10], 1);
            (!(a == 98 && b == 99)) ? write(1, ", ", 2) : write(1, "\n", 1);
            b++;
        }
        a++;
    }
}
int main()
{
    ft_print_comb2();
}
