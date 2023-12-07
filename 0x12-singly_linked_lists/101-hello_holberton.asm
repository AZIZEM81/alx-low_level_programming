section .data
hello db 'Hello, Holberton', 0

section .text
global _start

_start:
; System call to write the string to stdout
mov rax, 1          ; System call number for sys_write
mov rdi, 1          ; File descriptor 1 is stdout
mov rsi, hello      ; Pointer to the string
mov rdx, 16         ; Length of the string
syscall

; System call to exit the program
mov rax, 60         ; System call number for sys_exit
xor rdi, rdi        ; Exit code 0
syscall
