	.file	"triangle.c"
	.section	.rodata
.LC0:
	.string	"%d"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	$9, -12(%rbp)
	movl	$0, -20(%rbp)
	jmp	.L2
.L9:
	movl	-20(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	-12(%rbp), %eax
	subl	$1, %eax
	movl	%eax, -16(%rbp)
	jmp	.L3
.L4:
	movl	$32, %edi
	call	putchar
	subl	$1, -16(%rbp)
.L3:
	cmpl	$0, -16(%rbp)
	jg	.L4
	movl	$0, -8(%rbp)
	jmp	.L5
.L6:
	movl	-4(%rbp), %eax
	addl	$1, %eax
	movl	%eax, %esi
	movl	$.LC0, %edi
	movl	$0, %eax
	call	printf
	addl	$1, -4(%rbp)
	addl	$1, -8(%rbp)
.L5:
	movl	-20(%rbp), %eax
	addl	$1, %eax
	cmpl	-8(%rbp), %eax
	jg	.L6
	movl	-4(%rbp), %eax
	subl	$1, %eax
	movl	%eax, -8(%rbp)
	jmp	.L7
.L8:
	movl	-8(%rbp), %eax
	movl	%eax, %esi
	movl	$.LC0, %edi
	movl	$0, %eax
	call	printf
	subl	$1, -8(%rbp)
.L7:
	movl	-4(%rbp), %eax
	subl	-20(%rbp), %eax
	subl	$1, %eax
	cmpl	-8(%rbp), %eax
	jl	.L8
	movl	$10, %edi
	call	putchar
	subl	$1, -12(%rbp)
	addl	$1, -20(%rbp)
.L2:
	movl	-20(%rbp), %eax
	cmpl	-12(%rbp), %eax
	jl	.L9
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.2) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
