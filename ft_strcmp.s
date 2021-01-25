section     .text
            global _ft_strcmp

_ft_strcmp:
            xor		r10, r10
			xor		rcx, rcx
			xor		rbx, rbx

loop:
			mov cl, [rdi + r10]
			mov bl, [rsi + r10]
			cmp	cl, 0
			je	return
			cmp bl, 0
			je	return
			cmp	cl, bl
			je	incer
			jmp return

incer:
			inc r10
			jmp	loop

return:
			sub	rcx, rbx
			mov rax, rcx
			ret