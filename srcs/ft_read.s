; ft_read.s

; ssize_t	ft_read(int fd, void *buf, size_t count);
; rdi = int fd
; rsi = void *buf
; rdx = size_t count

extern __errno_location

global ft_read

section .text

ft_read:
	mov rax, 0
	syscall
	cmp rax, 0
	jl .error
	ret

.error:
	mov rdi, rax
	neg rdi
	call __errno_location
	mov [rax], rdi
	mov rax, -1
	ret

section .note.GNU-stack noalloc noexec nowrite progbits
