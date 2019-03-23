	global	main
	extern	printf

	section	.text

main:
	push	rbp
	mov	rbp, rsp
	mov	rdi, message
	call	printf

	leave
	ret

	section	.data
	message	db	"Hello, Holberton", 10, 0
	len equ $ - message
