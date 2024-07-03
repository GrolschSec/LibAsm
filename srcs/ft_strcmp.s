; ft_strcmp.s

; int		ft_strcmp(const char *s1, const char *s2);
; rdi = const char *s1
; rsi = const char *s2

global ft_strcmp

section .text

ft_strcmp:
	xor rcx, rcx

.loop:
	mov al, [rdi + rcx]
	mov bl, [rsi + rcx]
	cmp al, bl
	jne .end
	cmp al, 0
	je .end
	cmp bl, 0
	je .end
	inc rcx
	jmp .loop


.end:
    sub al, bl
	movsx rax, al
    ret

section .note.GNU-stack noalloc noexec nowrite progbits
