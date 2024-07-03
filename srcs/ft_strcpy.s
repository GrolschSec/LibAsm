; ft_strcpy.s

; char	*ft_strcpy(char *restrict dst, const char *restrict src);
; rdi = char *restrict dst
; rsi = const char *restrict src

global ft_strcpy

section .text

ft_strcpy:
	xor rcx, rcx

.loop:
	cmp byte [rsi + rcx], 0
	je .end
	mov al, [rsi + rcx]
	mov [rdi + rcx], al
	inc rcx
	jmp .loop

.end:
	mov byte [rdi + rcx], 0
	mov rax, rdi
	ret

section .note.GNU-stack noalloc noexec nowrite progbits
