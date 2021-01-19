section     .data

section     .text
            global _ft_strcpy

_ft_strcpy:
            mov		rax, -1

loop:
			inc rax							;i++;
			mov cl, byte [rsi + rax]        ;char c = src[i];
			mov	byte [rdi + rax], cl        ;dst[i]	= c;
			cmp	cl, 0						;if (c == 0)
			je	end							;	end
			jmp loop						;loop again

end:
			mov rax, rdi					;return is dst;
			ret		                   		;return (dst);