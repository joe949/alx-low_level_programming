section .data
    hello_msg db 'Hello, Holberton', 0

section .text
    global main
    extern printf

main:
    ; Call printf function
    mov rdi, hello_msg
    call printf

    ; Clean up and exit
    mov eax, 0
    ret
