


all:
				cc -o test -O0 -fno-stack-protector -fverbose-asm -fno-dwarf2-cfi-asm -fno-stack-protector test.c

asm:
				cc  -S -fverbose-asm -fno-dwarf2-cfi-asm test.c -fno-stack-protector test.c
