%include "../utils/printf32.asm"

section .data
    num dd 100
    print_format1 db "Sum(", 0
    print_format2 db "): ", 0

section .text
extern printf
global main
main:
    push ebp
    mov ebp, esp

    mov ecx, [num]
    xor eax, eax
    xor ebx, ebx

add_to_sum:
    mov eax, ecx
    mov edx, ecx
    mul edx
    add ebx, eax
    loop add_to_sum

    mov ecx, [num]
    PRINTF32 '%s\x0', print_format1
    PRINTF32 '%u\x0', ecx
    PRINTF32 '%s\x0', print_format2
    PRINTF32 '%u\x0', ebx

    xor eax, eax
    leave
    ret
