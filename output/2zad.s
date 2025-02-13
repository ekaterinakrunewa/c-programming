	.file	"2zad12.c"
	.text
	.globl	gcb
	.def	gcb;	.scl	2;	.type	32;	.endef
	.seh_proc	gcb
gcb:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$16, %rsp
	.seh_stackalloc	16
	.seh_endprologue
	movl	%ecx, 16(%rbp)
	movl	%edx, 24(%rbp)
	jmp	.L2
.L3:
	movl	24(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	16(%rbp), %eax
	cltd
	idivl	24(%rbp)
	movl	%edx, 24(%rbp)
	movl	-4(%rbp), %eax
	movl	%eax, 16(%rbp)
.L2:
	cmpl	$0, 24(%rbp)
	jne	.L3
	movl	16(%rbp), %eax
	addq	$16, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.globl	lcm
	.def	lcm;	.scl	2;	.type	32;	.endef
	.seh_proc	lcm
lcm:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$40, %rsp
	.seh_stackalloc	40
	leaq	32(%rsp), %rbp
	.seh_setframe	%rbp, 32
	.seh_endprologue
	movl	%ecx, 32(%rbp)
	movl	%edx, 40(%rbp)
	movl	32(%rbp), %eax
	imull	40(%rbp), %eax
	movl	%eax, %ebx
	movl	40(%rbp), %edx
	movl	32(%rbp), %eax
	movl	%eax, %ecx
	call	gcb
	movl	%eax, %ecx
	movl	%ebx, %eax
	cltd
	idivl	%ecx
	addq	$40, %rsp
	popq	%rbx
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
.LC0:
	.ascii "%d\12\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	call	__main
	movl	$18, %edx
	movl	$12, %ecx
	call	lcm
	movl	%eax, -4(%rbp)
	movl	-4(%rbp), %eax
	movl	%eax, %edx
	leaq	.LC0(%rip), %rax
	movq	%rax, %rcx
	call	printf
	movl	$0, %eax
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.def	__main;	.scl	2;	.type	32;	.endef
	.ident	"GCC: (Rev3, Built by MSYS2 project) 14.1.0"
	.def	printf;	.scl	2;	.type	32;	.endef
