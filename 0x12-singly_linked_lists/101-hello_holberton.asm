section .data
    hello_msg db "Hello, Holberton",10,0
    format db "%s",0

section .text
    global main
    extern printf

main:
    push rbp
    mov rbp, rsp

    mov rdi, format
    mov rsi, hello_msg
    call printf
   
    pop rbp
    mov eax, 0
    ret
