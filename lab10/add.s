/*
int add (struct X *x) {
  int a = 0;
  for (; x != NULL; x = x->next)
    a += x->val;
  return a;
}
*/
.text

.global add

add:
	pushq	%rbp
	movq 	%rsp, %rbp

	movl	$0, %eax

for:
	cmpq	$0, %rdi
	je	end

	addl	(%rdi), %eax
	addq	$8, %rdi
	movq	(%rdi), %rdi
	jmp for


end:
	movq	%rbp, %rsp
	popq	%rbp
	ret

