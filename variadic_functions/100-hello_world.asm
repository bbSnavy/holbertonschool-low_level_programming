global	main

section	.text
main:
	mov	rax, 1
	mov	rdi, 1
	mov	rsi, str
	mov	rdx, 13
	syscall
	mov	rax, 60
	xor	rdi, rdi
	syscall

section	.data
str:
	db	"Hello, World", 10
