; ft_strdup.s

; char	*ft_strdup(const char *s);
; rdi = const char *s

extern malloc

global ft_strdup

section .text

ft_strdup:
	call ft_strlen
	mv rdx, rax
	
section .note.GNU-stack noalloc noexec nowrite progbits
