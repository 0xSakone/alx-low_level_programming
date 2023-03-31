; 101-hello_holberton.asm

global main
extern printf

section .data
	display_text db 'Hello, Holberton', 10, 0;

section .text
main:
	lea rdi, [rel display_text];
	xor rax, rax;
	call printf
	
	xor rax, rax;
	ret
