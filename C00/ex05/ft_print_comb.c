#include <unistd.h>
void ft_print_comb()
{
    char hundred;
    char dozen;
    char unit;
    hundred = '0';
    dozen = '0';
    unit = '0'; //
    while (hundred <='9')
    {   
        dozen = hundred + 1;
        while (dozen <='9')
        {
            unit = dozen + 1;
            
            while (unit <='9')
            {   
                write(1, &hundred, 1);
                write(1, &dozen, 1);
                write(1, &unit, 1);
                // la ligne dessous doit lorsque la boucle débute à 012 et se termine à 789, écrire rien. Le reste du temps, virgule espace
                (!(hundred == '7' && dozen == '8' && unit == '9')) ? write(1,", ",1):write (1,"",1);
                
                unit++;
            }
            dozen++;
        }
        hundred++;
    } 
}
int main()
{
    ft_print_comb();
    return 0;
}
