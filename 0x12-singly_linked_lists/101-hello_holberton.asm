section .data
    hello_msg db 'Hello, Holberton', 0
    format db '%s', 0
    newline db 10

section .text
    global main
    extern printf

main:
    ; Set up the arguments for printf
    mov rdi, format
    mov rsi, hello_msg

    ; Call printf function
    call printf

    ; Print a new line
    mov rdi, format
    mov rsi, newline
    call printf

    ; Clean up and exit
    mov eax, 0
    ret
