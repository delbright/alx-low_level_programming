	.file	"6-size.c"
	.text
	.globl	variabletype
	.section	.rodata
.LC0:
	.string	"char"
.LC1:
	.string	"unsigned char"
.LC2:
	.string	"signed char"
.LC3:
	.string	"int"
.LC4:
	.string	"unsigned int"
.LC5:
	.string	"short"
.LC6:
	.string	"unsigned short"
.LC7:
	.string	"long"
.LC8:
	.string	"unsigned long"
.LC9:
	.string	"long long"
.LC10:
	.string	"unsigned long long"
	.section	.data.rel.local,"aw"
	.align 32
	.type	variabletype, @object
	.size	variabletype, 88
variabletype:
	.quad	.LC0
	.quad	.LC1
	.quad	.LC2
	.quad	.LC3
	.quad	.LC4
	.quad	.LC5
	.quad	.LC6
	.quad	.LC7
	.quad	.LC8
	.quad	.LC9
	.quad	.LC10
	.section	.rodata
.LC11:
	.string	"Size of %s is %u\n"
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
	subq	$16, %rsp
	movl	$0, -4(%rbp)
	jmp	.L2
.L3:
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	leaq	variabletype(%rip), %rax
	movq	(%rdx,%rax), %rax
	movl	$8, %edx
	movq	%rax, %rsi
	leaq	.LC11(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	addl	$1, -4(%rbp)
.L2:
	cmpl	$10, -4(%rbp)
	jle	.L3
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Debian 11.3.0-3) 11.3.0"
	.section	.note.GNU-stack,"",@progbits
