section     .text
            global	_ft_strdup
			extern	_ft_strlen
			extern	_malloc
			extern	_ft_strcpy
			extern	___error

_ft_strdup:
			push	rdi
			call	_ft_strlen
			inc		rax
			mov		rdi, rax
			call	_malloc
			cmp		rax, 0
			je		error
			mov		rdi, rax
			pop		rsi
			call	_ft_strcpy
			ret

error:
            ret