__asm__(
    ".text \n"
    ".global " START
    " \n"
    ".align  2 \n" START
    ": \n"
    "	add r19, r0, r0 \n"
    "	ori r5, r1, 0 \n"
    "1:	mfs r6, rpc \n"
    ".weak _DYNAMIC \n"
    ".hidden _DYNAMIC \n"
    "	addik r6, r6, _GLOBAL_OFFSET_TABLE_+8 \n"
    "	addik r6, r6, _DYNAMIC@GOTOFF \n"
    "	andi r1, r1, -8 \n"
    "	addik r1, r1, -8 \n"
    "	bri " START
    "_c \n"
    "	nop \n");
