__asm__(
    ".text \n"
    ".global " START
    " \n"
    ".type   " START ", %function \n" START
    ": \n"
    "	bl 1f \n"
    ".weak _DYNAMIC \n"
    ".hidden _DYNAMIC \n"
    "	.long _DYNAMIC-. \n"
    "1:	mflr 4 \n"
    "	lwz 3, 0(4) \n"
    "	add 4, 3, 4 \n"
    "	mr 3, 1 \n"
    "	clrrwi 1, 1, 4 \n"
    "	li 0, 0 \n"
    "	stwu 1, -16(1) \n"
    "	mtlr 0 \n"
    "	stw 0, 0(1) \n"
    "	bl " START "_c \n");
