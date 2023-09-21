; Write a 64-bit program in assembly that prints
; Hello, Holberton, followed by a new line.


section .data
	advanced db "Hello, Holberton", 10
	advanced_len equ $ - advanced
	format db "%s", 0

section .text
	global main
	extern printf

main:
	sub     rsp, 8
	mov     rdi, format
	mov     rsi, advanced
	call    printf
	add     rsp, 8
	ret
