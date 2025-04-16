#include <unistd.h>

void ft_is_negative(int n){
  char Res;
  Res = (n>=0) ? 'P' : 'N';
  write(1,&Res,1);
}