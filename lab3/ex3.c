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
	unsigned char aux;
	aux = ~x;
	return aux;
}

int main() {
	printf("%x tem numero %s de bits\n",0x01010101,odd_ones(0x01010101) ? "impar":"par");
	printf("%x tem numero %s de bits\n",0x01030101,odd_ones(0x01030101) ? "impar":"par");
	printf("%x trocado pela funcao switch_byte ela vira: %x\n", 0xAB, switch_byte(0xAB));
	return 0;
}