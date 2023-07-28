section .data
	message db 'Hello, Holberton', 10
	message_len equ $ - message

section .text
	global _start

_start:
	; Write the message to stdout
	mov rax, 1
	mov rdi, 1
	mov rsi, message
	mov rdx, message_len
	syscall

	; Exit the program with status code 0
	mov rax, 60
	xor rdi, rdi
	syscall
