%define STDOUT			1

%define SYSCALL_WRITE	1

; rdi, rsi, rdx, rcx, r8, r9
; rax

section .data
    TEST_STR db "test", 10, 0
    TEST_LEN equ $ - TEST_STR

section .text
    global test_func

test_func:
    mov rdi, STDOUT
    mov rsi, TEST_STR
    mov rdx, TEST_LEN
    mov rax, SYSCALL_WRITE
    syscall
    xor rax, rax
    ret

section .note.GNU-stack noalloc noexec nowrite progbits