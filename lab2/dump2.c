#include <ctype.h>
#include <stdio.h>

int string2num (char *s, int base) {
  int a = 0;
  int valorBase =0;
  int sequencia = 1;
  if (base<=10){
    for (; *s; s++)
      a = a*10 + (*s - '0');
  }
  else {
    char c;
  while (a != 0) {
      valorBase += (a % base) * sequencia;
      a /= base;
      sequencia *= 10;
    }
    return valorBase;
  }
}

int main (void) {
  /*printf("==> %d\n", string2num("1234"));
  printf("==> %d\n", string2num("1234") + 1);
  printf("==> %d\n", string2num("1234") + string2num("1"));*/
  printf("%d\n", string2num("777", 8));
  printf("%d\n", string2num("777", 10));
  return 0;
}