section .text
	global main
main:
	mov rdx,len
	mov rsi, msg
	mov rdi, 1
	mov rax, 1
	syscall

	mov eax, 60
	xor rdi, rdi
	syscall

messge:
	msg db 'Hello, Holberton', 0xa
	len equ $ - msg
