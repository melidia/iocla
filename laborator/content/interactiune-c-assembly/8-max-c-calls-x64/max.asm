section .text

global get_max

get_max:
	push rbp
	mov rbp, rsp

	; [ebp+8] is array pointer
	; [ebp+12] is array length

	mov ebx, [ebp+8] RDI
	mov ecx, [ebp+12] RSI
	xor eax, eax
	mov rcx, rsi

compare:
	cmp eax, [rdi+rcx*4-4]
	jge check_end
	mov eax, [rdi+rcx*4-4]
check_end:
	loopnz compare
	pop rbx

	leave
	ret
