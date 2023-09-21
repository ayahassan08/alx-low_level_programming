; Write a 64-bit program in assembly that prints
; Hello, Holberton, followed by a new line.

extern printf

section .text
	global main

main:
	sub     rsp, 8
	mov     rdi, format
	mov     rsi, advanced
	call    printf
	add     rsp, 8
	ret

section .data
	advanced db "Hello, Holberton", 0
	format db "%s", 10, 0
