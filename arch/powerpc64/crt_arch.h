__asm__(
    ".text \n"
    ".global " START
    " \n"
    ".type   " START ", %function \n" START
    ": \n"
    "	addis  2, 12, .TOC.-" START
    "@ha \n"
    "	addi   2,  2, .TOC.-" START
    "@l \n"
    "	lwz    4, 1f-" START
    "(12)\n"
    "	add    4, 4, 12 \n"
    "	mr     3, 1 \n"
    "	clrrdi 1, 1, 4 \n"
    "	li     0, 0 \n"
    "	stdu   0, -32(1) \n"
    "	mtlr   0 \n"
    "	bl " START
    "_c \n"
    ".weak   _DYNAMIC \n"
    ".hidden _DYNAMIC \n"
    "1:	.long _DYNAMIC-" START "\n");
