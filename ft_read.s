section     .data

section     .text
            global _ft_read
			extern	___error

_ft_read:
            mov     rax, 0x02000003 ; read
            syscall
            jc      error
            ret

error:
			push	rax
			call	___error
			pop		qword [rax]
            mov     rax, -1
            ret