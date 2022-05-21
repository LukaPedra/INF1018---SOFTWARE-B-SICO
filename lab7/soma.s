/*
#include <stdio.h>

int nums[4] = {65, -105, 111, 34};

int main (void) {
  int i;
  int s = 0;

  for (i=0;i<4;i++)
    s = s+nums[i];

  printf ("soma = %d\n", s);

  return 0;
}
*/

.data
nums:  .int  64, -105, 111, 34
Sf:  .string "%d\n"

.text
.globl  main
main:

/********************************************************/
/* mantenha este trecho aqui e nao mexa - prologo !!!   */
  pushq   %rbp
  movq    %rsp, %rbp
  subq    $16, %rsp
  movq    %rbx, -8(%rbp)
  movq    %r12, -16(%rbp)
/********************************************************/

  movq  $nums, %r12  /* r12 = &nums */
  movl  $0, %ebx  /* ebx = 0; */
  movl  $0, %r13d
  movq  %r12, %rcx

L1:
  cmpl  $4, %ebx  /* if (ebx == 4) ? */
  je  L2          /* goto L2 */

  addl  (%rcx), %r13d
  movl  %r13d, %eax

  addl  $1, %ebx
  addq  $4, %rcx
  jmp  L1         /* goto L1; */

L2:  
/*************************************************************/
/* este trecho imprime o valor de %eax (estraga %eax)  */
  movq    $Sf, %rdi    /* primeiro parametro (ponteiro)*/
  movl    %eax, %esi   /* segundo parametro  (inteiro) */
  call  printf       /* chama a funcao da biblioteca */
/*************************************************************/
/***************************************************************/
/* mantenha este trecho aqui e nao mexa - finalizacao!!!!      */
  movq  $0, %rax  /* rax = 0  (valor de retorno) */
  movq  -8(%rbp), %rbx
  movq  -16(%rbp), %r12
  leave
  ret      
/***************************************************************/

