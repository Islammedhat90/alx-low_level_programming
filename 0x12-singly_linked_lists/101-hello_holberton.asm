

section .data
hello:
  db "Hello, Holberton", 10

section .text
extern printf
global main
main:
  mov edi, hello
  mov eax, 0
  call printf
