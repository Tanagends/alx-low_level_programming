section .data
	message db 'Hello, Holberton', 0
	format db '%s', 10, 0

section .text
	global _start

_start:
	; Call printf with the message and format string
	mov rdi, format
	mov rsi, message
	xor rax, rax
	call printf

	; Exit the program with status code 0
	mov rax, 60
	xor rdi, rdi
	syscall
