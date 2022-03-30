#include <stdio.h>
int main(void) {
  unsigned int x = 0x87654321;
  unsigned int y, z;
  /* o byte menos significativo de x e os outros bits em 0 */
  y = x & 0xFF;
  /* o byte mais significativo com todos os bits em '1' 
     e os outros bytes com o mesmo valor dos bytes de x */
  z = x | 0xFF000000;

  printf("%08x %08x\n", y, z);
}
int odd_ones(unsigned int x){
  unsigned long qg = 0;
  for(; x; x>>=1){
    if(x&1){
      ++qg;
    }
  }
  if(qg&1){
    return 1;
  }
  return 0;
}