__asm__(
    ".text \n"
    ".global " START
    " \n"
    ".align  4 \n" START
    ": \n"
    "	l.jal 1f \n"
    "	 l.ori r3, r1, 0 \n"
    ".weak _DYNAMIC \n"
    ".hidden _DYNAMIC \n"
    "	.word _DYNAMIC-. \n"
    "1:	l.lwz r4, 0(r9) \n"
    "	l.add r4, r4, r9 \n"
    "	l.addi r2, r0, -8 \n"
    "	l.and r1, r1, r2 \n"
    "	l.addi r1, r1, -16 \n"
    "	l.jal " START
    "_c \n"
    "	 l.ori r2, r0, 0 \n");
