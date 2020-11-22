section     .data

section     .text
            global _ft_strcmp

_ft_strcmp:
            mov		rax, -1								;int i = -1;

loop:
			inc rax										;i++;
			mov	cl, byte [rdi + rax]					;c == s1[i];
			cmp	cl, byte [rsi + rax]					;if (c == s2[i]);
			cmp	cl, 0									;if rdi[i] == '\0'
			jz	loop									;equals ? loop again : don t;
			sub cl, byte [rsi + rax]					;dif = s1[i] - s2[i];
			je	equals									;if dif == 0 go to equals
			jg	greater									;if dif > 0 go to greater
			jl	lesser									;if dif > 0 go to lesser

greater:
			mov rax,1									;return = 1;
			ret

lesser:
			mov rax,-1									;return = -1;
			ret

equals:
			mov rax,0									;return = 0;
			ret