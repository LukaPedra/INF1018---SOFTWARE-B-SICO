#include <stdio.h>

int odd_ones(unsigned int x){
  unsigned long Conta = 0;
  for(; x; x>>=1){
    if(x&1){
      ++Conta;
    }
  }
  if(Conta&1){
    return 1;
  }
  return 0;
}
unsigned char switch_byte(unsigned char x){
	unsigned char n1 = x & 0x0f;
	unsigned char n2 = x & 0xf0;
	n1 <<= 4;
	n2 >>= 4;
	return n1+n2;
}

unsigned char rotate_left(unsigned char x, int n){
	unsigned char t1 = x<<n;
	unsigned char t2 = x>>(8-n);
	return t1|t2;
}

int main(void) {
	unsigned char c1 = switch_byte(0xAB);
	unsigned char c2 = rotate_left(0x61,1);
	unsigned char c3 = rotate_left(0x61,2);
	unsigned char c4 = rotate_left(0x61,7);
	printf("%2x\n",c1);
	printf("%2x\n",c2);
	printf("%2x\n",c3);
	printf("%2x\n",c4);	
	return 0;
}