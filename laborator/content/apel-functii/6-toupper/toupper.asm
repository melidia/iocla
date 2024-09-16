section .data
    before_format db "before %s", 13, 10, 0
    after_format db "after %s", 13, 10, 0
    mystring db "abcdefghij", 0

section .text

extern printf
global main

toupper:
    push ebp
    mov ebp, esp

    ; TODO
    mov eax, mystring
    xor ecx, ecx

test_one_byte:
    mov bl, byte [eax]
    test bl, bl
    je over
    cmp byte [eax], 0x61
    js inc
    sub byte [eax], 0x20

inc:
    inc eax
    inc ecx
    jmp test_one_byte

over:

    leave
    ret

main:
    push ebp
    mov ebp, esp

    push mystring
    push before_format
    call printf
    add esp, 8

    push mystring
    call toupper
    add esp, 4

    push mystring
    push after_format
    call printf
    add esp, 8

    leave
    ret
