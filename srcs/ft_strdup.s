; ft_strdup.s

; char	*ft_strdup(const char *s);
; rdi = const char *s

extern ft_strlen, ft_strcpy, malloc

global ft_strdup

section .text

ft_strdup:
	push rdi
    call ft_strlen
    inc rax
    mov rdi, rax
    call malloc WRT ..plt
    cmp rax, 0
    je .mem_fail
    mov rdi, rax
	pop rsi
    call ft_strcpy
    ret

.mem_fail:
    xor rax, rax
    ret

section .note.GNU-stack noalloc noexec nowrite progbits
