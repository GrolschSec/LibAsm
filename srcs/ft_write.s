; ft_write.s

; ssize_t	ft_write(int fd, const void *buf, size_t count);
; rdi = int fd
; rsi = const void *buf
; rdx = size_t count

extern __errno_location

global ft_write

section .text

ft_write:
    mov rax, 1
    syscall
    cmp rax, 0
    jl .error
    ret

.error:
    mov rdi, rax
	neg rdi
	call __errno_location WRT ..plt
	mov [rax], rdi
	mov rax, -1
    ret

section .note.GNU-stack noalloc noexec nowrite progbits
