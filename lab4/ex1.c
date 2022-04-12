#include <stdio.h>

void dump (void *p, int n) {
  unsigned char *p1 = p;
  while (n--) {
    printf("%p - %02x\n", p1, *p1);
    p1++;
  }
}

int main(void){
	signed char sc = -1;
	printf("\nsc=%u\n",sc);
	dump(&sc, sizeof(sc));
    unsigned int ui = sc;
	printf("\n\n\nui=%u\n",ui);
	dump(&ui, sizeof(ui));
	return 0;
}