section .text
	global main
main:
	mov rdx,len
	mov rcx,msg
	mov rbx,1
	mov rax,3
	int 0x80

	mov eax,1
	int 0x80

	section .data
messge:
	msg db 'Hello, Holberton', 0xa
	len equ $ - msg
