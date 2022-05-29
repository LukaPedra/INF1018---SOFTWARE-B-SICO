/*
int fat (int n) {
  if (n==0) return 1;
  else return n*fat(n-1);
}
*/

.text
.global fat

fat:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$16, %rsp
	movq	%rbx, -8(%rbp)

	cmpl	$0,	%edi
	je	if

	movl	%edi, %ebx
	subl	$1, %edi
	call	fat
	imull	%ebx, %eax
	jmp end

if:
	movl	$1, %eax

end:
	movq	-8(%rbp), %rbx
	movq	%rbp, %rsp
	popq	%rbp
	ret
