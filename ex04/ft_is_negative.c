#include <unistd.h>

void ft_is_negative(int n){
  char Res;
  Res = (n>=0) ? 'P' : 'N';
  write(1,&Res,1);
}
int main(){
    int p= 2;
    ft_is_negative(p);
    int n= -2;
    ft_is_negative(n);
    return 0;
}