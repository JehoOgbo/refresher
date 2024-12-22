; Declare needed c functions
extern		printf			; The printf function to be called

section .data				; Data section, contains initialized variables

message: db "Hello ALX", 10, 0		; C string must end with a null byte hence the zero. 10 is ascii for newline character
format: db "%s", 0

section .text				; Code is written here

global main				; standard gcc entry point
main:
	push		rbp		; set up the stack frame
	mov		rdi, format	; move fmt into register thats used as first argument to a function

	mov		rsi, message	; move second arg of printf into appropriate register
	call		printf

	pop		rbp		; pop base pointer

	mov		rax, 0		; set return value of function main as rax currently holds the return value of function printf
	ret				; return 0
