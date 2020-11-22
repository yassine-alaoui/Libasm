nasm -f macho64 $1
gcc main.c ${1%%.s}.o