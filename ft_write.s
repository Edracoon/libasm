section .text
	global _ft_write
	extern ___error

_ft_write:
	mov r8,rdx
	mov rax,0x2000004
	syscall
	jc error
	jmp return
error:
	push rax
	call ___error
	pop qword[rax]
	mov rax,-1
	ret
return:
	mov rax,r8
	ret
