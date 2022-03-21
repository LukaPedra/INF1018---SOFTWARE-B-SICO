#include <ctype.h>
#include <stdio.h>

int string2num (char *s, int base) {
  int a = 0;
  int valorBase =0;
  int sequencia = 1;  
  for (; *s; s++)
    if(isdigit(*s)){
      a = a*base + (*s - '0');
    }
    else if (isalpha(*s)) 
    {
      a = a*base + (*s - 'a' + 10);
    }
  if (base<=10){
    while (a != 0){
      valorBase += (a % base) * sequencia;
      a /= base;
      sequencia *= 10;
    }
    return valorBase;
  }
  return a;
}

int main (void) {
  /*printf("==> %d\n", string2num("1234"));
  printf("==> %d\n", string2num("1234") + 1);
  printf("==> %d\n", string2num("1234") + string2num("1"));
  printf("%d\n", string2num("777", 8));
  printf("%d\n", string2num("777", 10));*/
  printf("%d\n", string2num("1a", 16));
  printf("%d\n", string2num("a09b", 16));
  printf("%d\n", string2num("z09b", 36));
  return 0;
}