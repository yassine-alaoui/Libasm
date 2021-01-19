section     .data

section     .text
            global	_ft_write
			extern	___error

_ft_write:
            mov     rax, 0x02000004 ; write
            syscall
            jc      error
            ret

error:
			push	rax
			call	___error
			pop		qword [rax]
            mov     rax, -1
            ret