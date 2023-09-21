; Writes a 64-bit program in assembly that prints
; Hello, Holberton followed by a new line.


section .text
   global main
   extern printf

main:
   push rbp
   mov rdi, format
   mov rsi, advanced
   mov rax, 0
   call printf

   pop rbp
   mov rax, 0
   ret

section .data
   advanced: db "Hello, Holberton", 0
   format: db "%s", 10, 0
